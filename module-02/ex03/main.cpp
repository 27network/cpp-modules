/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 07:36:32 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 08:26:54 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

void check(int x, int y) {
	Point a(0, 0);
	Point b(0, 4);
	Point c(4, 0);
	Point point(x, y);

	if (bsp(a, b, c, point) == true)
		std::cout << "Point(" << point.getX() << ", " << point.getY() << ") is inside the triangle" << std::endl;
	else
		std::cout << "Point(" << point.getX() << ", " << point.getY() << ") is outside the triangle" << std::endl;
}

int main( void ) {
	check(1, 1);
	check(2, 2);
	check(3, 3);
	check(-1, -1);
	return 0;
}
