/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 06:59:35 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/19 15:12:05 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( 10 ); // 10 * 256 = 2560
    Fixed const c( 42.42f ); // static_cast<int>(roundf(42.42 * (1 << 8))) or 42.42 * 256 ≈ 10860
    Fixed const d( b ); // 2560 from b

    a = Fixed( 1234.4321f ); // 316014
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}

    // float floatValue = 42.42;
    // int _value = static_cast<int>(roundf(floatValue * (1 << 8)));
    // std::cout << _value << std::endl; //10860