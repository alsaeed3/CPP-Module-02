/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 06:59:35 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/23 02:57:13 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    a = Fixed( 12 );
    // ''<<'' operator to insert the fixed point value in the standard output
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    // overloading 6 comparison operators
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    // arithmetic operators
    std::cout << "a + b: " << (a + b) << std::endl;
    std::cout << "a - b: " << (a - b) << std::endl;
    std::cout << "a * b: " << (a * b) << std::endl;
    std::cout << "a / b: " << (a / b) << std::endl;
    // increment/decrement operators (post and pre).
    std::cout << "a++: " << (a++) << std::endl;
    std::cout << "++a: " << (++a) << std::endl;
    std::cout << "a--: " << (a--) << std::endl;
    std::cout << "--a: " << (--a) << std::endl;
    // std::cout << "b--: " << (b--) << std::endl; // cant do this because b is const
    // std::cout << "--b: " << (--b) << std::endl;
    // min and max member functions
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    return 0;
}
