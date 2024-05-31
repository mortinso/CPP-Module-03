/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:48:28 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 15:37:30 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "ScavTrap default constructor called" <<std::endl;
	health = 100;
	energy = 50;
	damage = 20;
}

// Constructor from name
ScavTrap::ScavTrap( const std::string &_name ) : ClapTrap(_name) {
	std::cout << "ScavTrap " << name << " constructor called" <<std::endl;
	health = 100;
	energy = 50;
	damage = 20;
}

// Copy constructor
ScavTrap::ScavTrap( const ScavTrap &scavtrap ) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scavtrap;
}

// Destructor
ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << name << " destructor called" <<std::endl;
}

// Copy assignment opperator overload
ScavTrap&	ScavTrap::operator = ( const ScavTrap &scavtrap ) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &scavtrap)
		ClapTrap:operator=(scavtrap);
	return (*this);
}

// ScavTrap attack function
void	ScavTrap::attack(const std::string& target) {
	if (!health)
		std::cout << "ScavTrap " << name << " is dead." << std::endl;
	else if (!energy)
		std::cout << "ScavTrap " << name << " is too tired to attack " << target << "." << std::endl;
	else
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " for " << damage << " damage points!" << std::endl;
		energy--;
	}
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << name << " is now guarding the gate." << std::endl;
}