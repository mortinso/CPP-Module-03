/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:48:28 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 16:51:03 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << SCAV << "default constructor called" <<std::endl;
	health = 100;
	energy = 50;
	damage = 20;
}

// Constructor from name
ScavTrap::ScavTrap( const std::string &_name ) : ClapTrap(_name) {
	std::cout << SCAV << name << " constructor called" <<std::endl;
	health = 100;
	energy = 50;
	damage = 20;
}

// Copy constructor
ScavTrap::ScavTrap( const ScavTrap &scavtrap ) : ClapTrap(scavtrap) {
	std::cout << SCAV << "copy constructor called" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap( void ) {
	std::cout << SCAV << name << " destructor called" <<std::endl;
}

// Copy assignment opperator overload
ScavTrap&	ScavTrap::operator = ( const ScavTrap &scavtrap ) {
	std::cout << SCAV << "copy assignment operator called" << std::endl;
	if (this != &scavtrap)
		ClapTrap::operator=(scavtrap);
	return (*this);
}

// ScavTrap attack function
void	ScavTrap::attack(const std::string& target) {
	if (!health)
		std::cout << SCAV << RED << name << " is dead." << RESET << std::endl;
	else if (!energy)
		std::cout << SCAV << YELLOW << name << " is too tired to attack " << target << RESET << std::endl;
	else
	{
		std::cout << SCAV << name << " attacks " << target << " for " << damage << " damage points!" << std::endl;
		energy--;
	}
}

void	ScavTrap::guardGate( void ) {
	std::cout << SCAV << name << " is now guarding the gate." << std::endl;
}