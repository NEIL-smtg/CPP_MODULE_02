/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:13:35 by suchua            #+#    #+#             */
/*   Updated: 2023/04/05 04:36:58 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					fixedNum;
		const static int	fracBits;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif