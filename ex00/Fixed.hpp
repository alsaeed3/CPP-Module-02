/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 06:59:50 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/19 12:37:57 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {

    private:

        int _value;
        static const int _fractionalBits = 8;

    public:

        Fixed();
        Fixed( const Fixed& fixed );
        Fixed& operator=( const Fixed& fixed );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif