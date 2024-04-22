/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 07:00:02 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/19 11:55:05 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value( 0 ) {

    std::cout << "Default constructor called" << std::endl;

	return;
}

/* copy constructor */
/* It's used when we want to create a new object as a copy of an existing object */
Fixed::Fixed( const Fixed& fixed ) {

    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;

	return;
}

/* copy assignment operator */
/* It's used when we want to copy the value from one object to another existing object  */
Fixed& Fixed::operator=( const Fixed& fixed ) {

    std::cout << "Copy assignment operator called" << std::endl;
    
    if ( this != &fixed )
        this->_value = fixed.getRawBits();

    return *this;
}

Fixed::~Fixed() {

    std::cout << "Destructor called" << std::endl;

	return;
}

int		Fixed::getRawBits( void ) const {

    std::cout << "getRawBits member function called" << std::endl;

    return this->_value;
}

void	Fixed::setRawBits( int const raw ) {

    std::cout << "setRawBits member function called" << std::endl;
    
    this->_value = raw;

	return;
}
