/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:32:26 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 17:01:41 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	get_area(Point const &v1, Point const &v2, Point const &v3)
{
	Fixed	tmp1, tmp2, tmp3, ret;

	tmp1 = Fixed(v1.getX() * (v2.getY() - v3.getY()));
	tmp2 = Fixed(v2.getX() * (v3.getY() - v1.getY()));
	tmp3 = Fixed(v3.getX() * (v1.getY() - v2.getY()));
	ret = (tmp1 + tmp2 + tmp3) / Fixed(2);
	if (ret.getRawBits() < 0)
		ret = (ret * Fixed(-1));
	return (ret);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	a1(get_area(a, b, c));
	Fixed	a2(get_area(a, b, point));
	Fixed	a3(get_area(b, c, point));
	Fixed	a4(get_area(c, a, point));
	Fixed	sum(a2 + a3 + a4);

	return (sum == a1);
}
