/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:04:13 by suchua            #+#    #+#             */
/*   Updated: 2023/04/07 00:24:50 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(float const n1, float const n2);
		Point(Point& other);
		Point& operator=(Point& other);
		~Point(void);
		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
	private:
		const Fixed x;
		const Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
