/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:59:47 by suchua            #+#    #+#             */
/*   Updated: 2023/04/07 02:05:12 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed(void);
		Fixed(int const num);
		Fixed(float const num);
		float	toFloat(void) const;
		int		toInt(void) const;
	
		// > < = !=
		bool	operator>(Fixed& f);
		bool	operator<(Fixed& f);
		bool	operator>=(Fixed& f);
		bool	operator<=(Fixed& f);
		bool	operator==(Fixed& f);
		bool	operator!=(Fixed& f);

		// + - * /
		Fixed	operator+(Fixed f) const;
		Fixed	operator-(Fixed f) const;
		Fixed	operator*(Fixed f) const;
		Fixed	operator/(Fixed f) const;
		
		// postfix prefix ++ --
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
		
		//min max
		static Fixed&	min(Fixed& f1, Fixed& f2);
		static Fixed&	max(Fixed& f1, Fixed& f2);
		
		//min max const
		static const Fixed&	min(Fixed const &f1, Fixed const &f2);
		static const Fixed&	max(Fixed const &f1, Fixed const &f2);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					fixedNum;
		static const int	fracBits;
		
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif
