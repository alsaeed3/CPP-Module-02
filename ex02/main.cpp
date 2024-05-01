/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 06:59:35 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 12:23:39 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    a = Fixed( 12 );
    std::cout << std::endl;
    // ''<<'' operator to insert the fixed point value in the standard output
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << std::endl;
    std::cout << "___________________________" << std::endl;
    std::cout << std::endl;
    // overloading 6 comparison operators
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << std::endl;
    std::cout << "___________________________" << std::endl;
    std::cout << std::endl;
    // arithmetic operators
    std::cout << "a + b: " << (a + b) << std::endl;
    std::cout << "a - b: " << (a - b) << std::endl;
    std::cout << "a * b: " << (a * b) << std::endl;
    std::cout << "a / b: " << (a / b) << std::endl;
    std::cout << std::endl;
    std::cout << "___________________________" << std::endl;
    std::cout << std::endl;
    // increment/decrement operators (post and pre).
    std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " <<  a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
    std::cout << std::endl;
    std::cout << "___________________________" << std::endl;
    std::cout << std::endl;
    // min and max member functions
    std::cout << "max: " << Fixed::max( a, b ) << std::endl;
    std::cout << "min: " << Fixed::min( a, b ) << std::endl;
    std::cout << std::endl;
    return 0;
}
