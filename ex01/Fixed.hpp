/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 06:59:50 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/19 13:08:11 by alsaeed          ###   ########.fr       */
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

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream &operator<<( std::ostream &ostream, const Fixed &fixed );

#endif