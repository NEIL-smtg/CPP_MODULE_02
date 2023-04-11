/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:11:38 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 17:03:39 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) :x(0), y(0)
{	
}

Point::Point(float const n1, float const n2) :x(n1), y(n2)
{
}

Point::Point(Point& other) :x(other.x), y(other.y)
{
}

Point&	Point::operator=(Point& other)
{
	(void) other;
	return *this;
}

Point::~Point(void)
{
}

const Fixed&	Point::getX(void) const
{
	return x;
}

const Fixed&	Point::getY(void) const
{
	return y;
}
