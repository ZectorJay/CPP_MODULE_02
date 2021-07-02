/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:20:56 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/03 06:20:57 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0) {
	std::cout<<GREEN<<"Default constructor called"<<RESET<<std::endl;
}

Fixed::~Fixed(){
	std::cout<<RED<<"Destructor called"<<RESET<<std::endl;
}

Fixed::Fixed( Fixed const & src){
	std::cout<<BLUE<<"Copy constructor called"<<RESET<<std::endl;
	*this = src;
}

int			Fixed::getRawBits( void ) const { 
	std::cout<<BROWN<<"getRawBits member function called"<<RESET<<std::endl;
	return (_fixed_point);
}

void		Fixed::setRawBits ( int const raw ) { 
	std::cout<<RANDOM<<"setRawBits member function called"<<RESET<<std::endl;
	_fixed_point = raw;
}

Fixed &	Fixed::operator = (Fixed const & value){
	std::cout<<RANDOM<<"Assignation operator called"<<RESET<<std::endl;
	if (this != &value)
		_fixed_point = value.getRawBits();
	return (*this);
}