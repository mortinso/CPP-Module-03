/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:34:50 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 18:08:13 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// Default constructor
FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << FRAG << "default constructor called" <<std::endl;
	health = 100;
	energy = 100;
	damage = 30;
}

// Constructor from name
FragTrap::FragTrap( const std::string &_name ) : ClapTrap(_name) {
	std::cout << FRAG << name << " constructor called" <<std::endl;
	health = 100;
	energy = 100;
	damage = 30;
}

// Copy constructor
FragTrap::FragTrap( const FragTrap &fragtrap ) : ClapTrap(fragtrap) {
	std::cout << FRAG << "copy constructor called" << std::endl;
}

// Destructor
FragTrap::~FragTrap( void ) {
	std::cout << FRAG << name << " destructor called" <<std::endl;
}

// Copy assignment opperator overload
FragTrap&	FragTrap::operator = ( const FragTrap &fragtrap ) {
	std::cout << FRAG << "copy assignment operator called" << std::endl;
	if (this != &fragtrap)
		ClapTrap::operator=(fragtrap);
	return (*this);
}

// --------------------------------------------------Methods--------------------------------------------------
// Shows FragTrap's stats
void	FragTrap::showStats(void) {
	std::cout << FRAG << name << " has " << health  << " HP, " << energy << " energy and " << damage << " damage points" << std::endl;
}

// FragTrap requests a high five
void	FragTrap::highFivesGuys(void) {
	std::cout << FRAG << name << " is requesting a high five!" << std::endl;
}