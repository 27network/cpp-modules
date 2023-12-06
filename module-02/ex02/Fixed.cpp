/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 07:34:53 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 08:00:09 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value): _value(value << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value): _value(roundf(value * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy): _value(copy._value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& x)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = x.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& x) const
{
	return (this->_value > x.getRawBits());
}

bool	Fixed::operator<(const Fixed& x) const
{
	return (this->_value < x.getRawBits());
}

bool	Fixed::operator>=(const Fixed& x) const
{
	return (this->_value >= x.getRawBits());
}

bool	Fixed::operator<=(const Fixed& x) const
{
	return (this->_value <= x.getRawBits());
}

bool	Fixed::operator==(const Fixed& x) const
{
	return (this->_value == x.getRawBits());
}

bool	Fixed::operator!=(const Fixed& x) const
{
	return (this->_value != x.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& x) const
{
	return (Fixed(this->toFloat() + x.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& x) const
{
	return (Fixed(this->toFloat() - x.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& x) const
{
	return (Fixed(this->toFloat() * x.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& x) const
{
	return (Fixed(this->toFloat() / x.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed&	Fixed::min(Fixed& x, Fixed& y)
{
	return (x < y ? x : y);
}

Fixed&	Fixed::max(Fixed& x, Fixed& y)
{
	return (x > y ? x : y);
}

const Fixed&	Fixed::min(const Fixed& x, const Fixed& y)
{
	return (x < y ? x : y);
}

const Fixed&	Fixed::max(const Fixed& x, const Fixed& y)
{
	return (x > y ? x : y);
}

int		Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_value >> _bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& x)
{
	out << x.toFloat();
	return (out);
}
