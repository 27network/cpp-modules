/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 07:34:53 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 07:58:32 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed(void);
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed& x);

		bool	operator>(const Fixed& x) const;
		bool	operator<(const Fixed& x) const;
		bool	operator>=(const Fixed& x) const;
		bool	operator<=(const Fixed& x) const;
		bool	operator==(const Fixed& x) const;
		bool	operator!=(const Fixed& x) const;

		Fixed	operator+(const Fixed& x) const;
		Fixed	operator-(const Fixed& x) const;
		Fixed	operator*(const Fixed& x) const;
		Fixed	operator/(const Fixed& x) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static Fixed&	min(Fixed& x, Fixed& y);
		static Fixed&	max(Fixed& x, Fixed& y);
		static const Fixed&	min(const Fixed& x, const Fixed& y);
		static const Fixed&	max(const Fixed& x, const Fixed& y);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_value;
		static const int	_bits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed& x);

#endif
