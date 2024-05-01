/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 07:00:02 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 12:20:48 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value( 0 ) {

	return;
}

Fixed::Fixed( const int integerValue ) : _value( integerValue << Fixed::_fractionalBits ) {

	return;
}

Fixed::Fixed( const float floatValue ) : _value( static_cast<int>( roundf( floatValue * ( 1 << Fixed::_fractionalBits ) ) ) ) {

	return;
}

/* copy constructor */
/* It's used when we want to create a new object as a copy of an existing object */
Fixed::Fixed( const Fixed& fixed ) {

	*this = fixed;

	return;
}

/* copy assignment operator */
/* It's used when we want to copy the value from one object to another existing object  */
Fixed&			Fixed::operator=( const Fixed& fixed ) {
	
	if ( this != &fixed )
		this->_value = fixed.getRawBits();

	return *this;
}

/* It is an overload of the << operator for std::ostream and Fixed objects */
/* It defines how Fixed objects should be outputted when used with std::cout or any other std::ostream. */
/* It helps in displaying the values always as float */
/* this will include outputting both integers and floats */
std::ostream&	operator<<( std::ostream& ostream, const Fixed& fixed ) {

	ostream << fixed.toFloat();

	return ostream;
}

Fixed::~Fixed( void ) {

	return;
}

int				Fixed::getRawBits( void ) const {

	return this->_value;
}

void			Fixed::setRawBits( int const raw ) {

	this->_value = raw;

	return;
}

float			Fixed::toFloat( void ) const {

	return static_cast<float>( _value ) / ( 1 << Fixed::_fractionalBits );
}

int				Fixed::toInt( void ) const {

	return this->_value >> Fixed::_fractionalBits;
}

/************************/
/* comparison operators */
/************************/
bool			Fixed::operator>( const Fixed& numB ) const {

	return this->_value > numB.getRawBits();
}

bool			Fixed::operator>=( const Fixed& numB ) const {

	return this->_value >= numB.getRawBits();
}

bool			Fixed::operator<( const Fixed& numB ) const {

	return this->_value < numB.getRawBits();
}

bool			Fixed::operator<=( const Fixed& numB ) const {

	return this->_value <= numB.getRawBits();
}

bool			Fixed::operator!=( const Fixed& numB ) const {

	return this->_value != numB.getRawBits();
}

bool			Fixed::operator==( const Fixed& numB ) const {

	return this->_value == numB.getRawBits();
}

/************************/
/* arithmetic operators */
/************************/
Fixed			Fixed::operator+( const Fixed& numB ) {

	return Fixed( this->toFloat() + numB.toFloat() );
}

Fixed			Fixed::operator-( const Fixed& numB ) {

	return Fixed( this->toFloat() - numB.toFloat() );
}

Fixed			Fixed::operator*( const Fixed& numB ) {

	return Fixed( this->toFloat() * numB.toFloat() );
}

Fixed			Fixed::operator/( const Fixed& numB ) {

	return Fixed( this->toFloat() / numB.toFloat() );
}

/*********************************/
/* increment/decrement operators */
/*********************************/
Fixed			Fixed::operator++( void ) {

	Fixed inc;

	inc._value = ++this->_value;
	return inc;
}

Fixed			Fixed::operator++( int ) {

	Fixed inc;

	inc._value = this->_value++;
	return inc;
}

Fixed			Fixed::operator--( void ) {

	Fixed dec;

	dec._value = --this->_value;
	return dec;
}

Fixed			Fixed::operator--( int ) {

	Fixed dec;

	dec._value = this->_value--;
	return dec;
}

/****************************/
/* min/max member functions */
/****************************/

Fixed&			Fixed::max( Fixed& fixed1, Fixed& fixed2 ) {

	return fixed1 > fixed2 ? fixed1 : fixed2;
}

const Fixed&	Fixed::max( const Fixed& fixed1, const Fixed& fixed2 ) {

	if ( fixed1.getRawBits() > fixed2.getRawBits() )
		return fixed1;
	else
		return fixed2;
}

Fixed&			Fixed::min( Fixed& fixed1, Fixed& fixed2 ) {

	return fixed1 < fixed2 ? fixed1 : fixed2;
}

const Fixed&	Fixed::min( const Fixed& fixed1, const Fixed& fixed2 ) {

	if ( fixed1.getRawBits() < fixed2.getRawBits() )
		return fixed1;
	else
		return fixed2;
}