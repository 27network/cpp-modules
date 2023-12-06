/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:01:58 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 08:07:21 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
}

Point::~Point(void)
{
}

Point::Point(Point &copy): _x(copy.getX()), _y(copy.getY())
{
	*this = copy;
}

Point& Point::operator=(const Point& x)
{
	if (this != &x)
	{
		(Fixed)this->_x = x.getX();
		(Fixed)this->_y = x.getY();
	}
	return (*this);
}

Fixed Point::getX(void) const
{
	return (this->_x);
}

Fixed Point::getY(void) const
{
	return (this->_y);
}
