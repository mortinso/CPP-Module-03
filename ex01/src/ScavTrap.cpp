/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:48:28 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/29 12:24:00 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "Default constructor called" <<std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavtrap ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = scavtrap;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Destructor called" <<std::endl;
}

ScavTrap& ScavTrap::operator = ( const ScavTrap &scavtrap ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &scavtrap) {
		// this->setValue(scavtrap.getValue());
	}
	return (*this);
}
