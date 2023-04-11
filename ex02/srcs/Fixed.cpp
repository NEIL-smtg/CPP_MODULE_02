/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:04:29 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 17:16:26 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fracBits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedNum = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment called" << std::endl;
	this->fixedNum = other.fixedNum;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl; 
	return this->fixedNum;
}

void	Fixed::setRawBits(const int raw)
{
	this->fixedNum = raw;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;

	float	eps = 1 << fracBits;
	this->fixedNum = num * (eps);
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;

	float	eps = 1 << fracBits;
	this->fixedNum = static_cast<int>(roundf(num * (eps)));
}

int	Fixed::toInt(void) const
{
	float	eps = 1 << fracBits;
	return this->fixedNum / eps;
}

float	Fixed::toFloat(void) const
{
	float	eps = 1 << fracBits;
	return (this->fixedNum / static_cast<float>(eps));
}

std::ostream&	operator<<(std::ostream& out, const Fixed& f)
{
	out << f.toFloat();
	return out;
}

Fixed	Fixed::operator++(int)
{
	float	eps = 1 << fracBits;
	float	inverse_eps = 1.0f / eps;

	Fixed	tmp(*this);
	fixedNum = (fixedNum * eps + eps) * inverse_eps;
	return tmp;
}

Fixed	Fixed::operator++()
{
	float	eps = 1 << fracBits;
	float	inverse_eps = 1.0f / eps;

	fixedNum = (fixedNum * eps + eps) * inverse_eps;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	float	eps = 1 << fracBits;
	float	inverse_eps = 1.0f / eps;

	Fixed	temp(this->fixedNum);
	fixedNum = (fixedNum * eps - eps) * inverse_eps;
	return temp;
}

Fixed	Fixed::operator--()
{
	float	eps = 1 << fracBits;
	float	inverse_eps = 1.0f / eps;

	fixedNum = (fixedNum * eps - eps) * inverse_eps;
	return *this;
}

bool	Fixed::operator>(Fixed& f) const
{
	return (this->toFloat() > f.toFloat());
}

bool	Fixed::operator<(Fixed& f) const
{
	return (this->toFloat() < f.toFloat());	
}

bool	Fixed::operator>=(Fixed& f) const
{
	return (this->toFloat() >= f.toFloat());
}

bool	Fixed::operator<=(Fixed& f) const
{
	return (this->toFloat() <= f.toFloat());	
}

bool	Fixed::operator==(Fixed& f) const
{
	return (this->toFloat() == f.toFloat());
}

bool	Fixed::operator!=(Fixed& f) const
{
	return (this->toFloat() != f.toFloat());
}

Fixed	Fixed::operator+(Fixed f) const
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator-(Fixed f) const
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed	Fixed::operator*(Fixed f) const
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator/(Fixed f) const
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return f1;
	return f2;
}

const Fixed&	Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return f1;
	return f2;
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return f1;
	return f2;
}

const Fixed&	Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return f1;
	return f2;
}
