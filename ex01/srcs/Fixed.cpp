/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:31:50 by suchua            #+#    #+#             */
/*   Updated: 2023/04/05 06:15:46 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor is called" << std::endl;
	this->fixedNum = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedNum = other.fixedNum;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->fixedNum = other.fixedNum;
	}
	return *this;
}

Fixed::Fixed(const int num)
{
	this->fixedNum = num << fracBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	 this->fixedNum = static_cast<int>(roundf(num * (1 << fracBits)));
	std::cout << "Float constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixedNum) / (1 << fracBits));
}

int	Fixed::toInt(void) const
{
	return (this->fixedNum >> fracBits);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedNum);
}

void Fixed::setRawBits(const int raw)
{
	this->fixedNum = raw;
}
