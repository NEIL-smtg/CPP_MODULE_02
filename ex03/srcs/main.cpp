/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:11:00 by suchua            #+#    #+#             */
/*   Updated: 2023/04/07 03:27:11 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    // Define the vertices of a triangle
    Point v1(0.0f, 0.0f);
    Point v2(1.0f, 0.0f);
    Point v3(0.0f, 1.0f);

    // Define a point inside the triangle
    Point p1(0.25f, 0.25f);

    // Define a point outside the triangle
    Point p2(2.0f, 2.0f);
    Point p3(2.0f, 0.5f);
    Point p4(0.5f, 2.0f);
    Point p5(1.0f, 1.0f);
    Point p6(-1.0f, 1.0f);
    Point p7(1.0f, 2.0f);
    Point p8(-1.0f, -2.0f);    

    std::cout << "p1 is inside the triangle: " << bsp(v1, v2, v3, p1) << std::endl;

    std::cout << "p2 is inside the triangle: " << bsp(v1, v2, v3, p2) << std::endl;

    std::cout << "p3 is inside the triangle: " << bsp(v1, v2, v3, p3) << std::endl;

    std::cout << "p4 is inside the triangle: " << bsp(v1, v2, v3, p4) << std::endl;

    std::cout << "p5 is inside the triangle: " << bsp(v1, v2, v3, p5) << std::endl;

    std::cout << "p6 is inside the triangle: " << bsp(v1, v2, v3, p6) << std::endl;


    Point v6(0.0f, 0.0f);
    Point v7(2.0f, 0.0f);
    Point v8(0.0f, 2.0f);
    Point p10(1.0f, 1.0f);

    std::cout << "p10 is inside the triangle: " << bsp(v6, v7, v8, p10) << std::endl;

    Point v11(0.0f, 0.0f);
    Point v12(0.0f, 0.0f);
    Point v13(0.0f, 0.0f);
    Point p14(0.0f, 0.0f);

    std::cout << "p14 is inside the triangle: " << bsp(v11, v12, v13, p14) << std::endl;

    Point v21(0.0f, 0.0f);
    Point v22(1.0f, 0.0f);
    Point v23(0.0f, 1.0f);
    Point p24(0.5f, 0.5f);
    std::cout << "p24 is inside the triangle: " << bsp(v21, v22, v23, p24) << std::endl;


    return 0;
}

