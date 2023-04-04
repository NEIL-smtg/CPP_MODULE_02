/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:31:50 by suchua            #+#    #+#             */
/*   Updated: 2023/04/05 04:47:44 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const static int	fracBits = 0;

Fixed::Fixed(void)
{
	std::cout << "Default constructor is called" << std::endl;
	this->fixedNum = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	if (this != &other)
	{
		std::cout << "Copy constructor called" << std::endl;
		this->fixedNum = other.fixedNum;
	}	
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedNum);
}

void	Fixed::setRawBits(const int raw)
{
	this->fixedNum = raw;
}
