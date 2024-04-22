/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 06:59:50 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/23 02:56:10 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {

	private:

		int _value;
		static const int _fractionalBits = 8;

	public:

		Fixed( void );
		Fixed( const int integerValue );
		Fixed( const float floatValue );
		Fixed( const Fixed& fixed );
		Fixed& operator=( const Fixed& fixed );
		~Fixed( void );

		int					getRawBits( void ) const;
		void				setRawBits( int const raw );

		float				toFloat( void ) const;
		int					toInt( void ) const;

		/************************/
		/* comparison operators */
		/************************/
		bool				operator>( const Fixed& numB ) const;
		bool				operator>=( const Fixed& numB ) const;

		bool				operator<( const Fixed& numB ) const;
		bool				operator<=( const Fixed& numB ) const;

		bool				operator!=( const Fixed& numB ) const;
		bool				operator==( const Fixed& numB ) const;

		/************************/
		/* arithmetic operators */
		/************************/
		Fixed				operator+( const Fixed& numB );

		Fixed				operator-( const Fixed& numB );

		Fixed				operator*( const Fixed& numB );

		Fixed				operator/( const Fixed& numB );

		/*********************************/
		/* increment/decrement operators */
		/*********************************/
		Fixed&				operator++( void );
		Fixed				operator++( int );

		Fixed&				operator--( void );
		Fixed				operator--( int );

		/****************************/
		/* min/max member functions */
		/****************************/
		
		static Fixed&		max( Fixed& fixed1, Fixed& fixed2 );
		static Fixed&		min( Fixed& fixed1, Fixed& fixed2 );

		static const Fixed&	max( const Fixed& fixed1, const Fixed& fixed2 );
		static const Fixed&	min( const Fixed& fixed1, const Fixed& fixed2 );
};

std::ostream&				operator<<( std::ostream& ostream, const Fixed& fixed );

#endif