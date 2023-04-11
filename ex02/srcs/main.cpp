/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:11:00 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 16:51:25 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(3.0f);
	Fixed d(3.0f);
	bool ret = c==d;
	std::cout << ret << std::endl;

	c = Fixed(5.0f);
	ret = c!=d;
	std::cout << ret << std::endl;

	ret = c > d;
	std::cout << ret << std::endl;

	ret = c < d;
	std::cout << ret << std::endl;

	std::cout << c*d << std::endl;
	return 0;
}

