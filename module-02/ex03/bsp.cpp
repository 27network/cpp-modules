/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:07:50 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 08:27:40 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static const Fixed 	abs(Fixed const x)
{
	return (x < 0 ? x * -1 : x);
}

static const Fixed	calc_area(const Point& a, const Point& b, const Point& c)
{
	return (abs((a.getX() * (b.getY() - c.getY())) +
				(b.getX() * (c.getY() - a.getY())) +
				(c.getX() * (a.getY() - b.getY()))) / 2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaABC = calc_area(a, b, c);

	Fixed areaPBC = calc_area(point, b, c);
	Fixed areaAPC = calc_area(a, point, c);
	Fixed areaABP = calc_area(a, b, point);

	return (areaABC == areaPBC + areaAPC + areaABP);
}
