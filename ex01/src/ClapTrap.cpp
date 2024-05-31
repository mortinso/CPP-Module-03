/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:30:07 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 18:18:50 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap( void ) : name("null"), health(10), energy(10), damage(0) {
	std::cout << "ClapTrap default constructor called" <<std::endl;
}

// Constructor from name
ClapTrap::ClapTrap( const std::string &_name ) : name(_name) , health(10) , energy(10), damage(0){
	std::cout << "ClapTrap " << name <<" constructor called" <<std::endl;
}

// Copy constructor
ClapTrap::ClapTrap( const ClapTrap &claptrap ) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = claptrap;
}

// Destructor called
ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << name << " destructor called" <<std::endl;
}

// Copy assignment operator overload
ClapTrap&	ClapTrap::operator = ( const ClapTrap &claptrap ) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &claptrap)
	{
		name = claptrap.name;
		health = claptrap.health;
		energy = claptrap.energy;
		damage = claptrap.damage;
	}
	return (*this);
}

// --------------------------------------------------Getters--------------------------------------------------
// Getter for name
std::string ClapTrap::getName( void ) {
	return name;
}

// Getter for damage
int	ClapTrap::getHealth( void ) {
	return health;
}

// Getter for damage
int	ClapTrap::getEnergy( void ) {
	return energy;
}

// Getter for damage
int	ClapTrap::getDamage( void ) {
	return damage;
}

// --------------------------------------------------Methods--------------------------------------------------
// Shows ClapTrap's stats
void	ClapTrap::showStats(void) {
	std::cout << "ClapTrap " << name << " has " << health  << " HP, " << energy << " energy and " << damage << " damage points" << std::endl;
}

// Attacks target
void	ClapTrap::attack(const std::string& target) {
	if (!health)
		std::cout << RED << "ClapTrap " << name << " is dead." << RESET << std::endl;
	else if (!energy)
		std::cout << YELLOW << "ClapTrap " << name << " is too tired to attack " << target << RESET << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " for " << damage << " damage points!" << std::endl;
		energy--;
	}
}

// Takes 'amount' points of damage
void	ClapTrap::takeDamage(unsigned int amount) {
	if (!health)
		std::cout << RED << "ClapTrap " << name << " is already dead." << RESET << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " damage points! ";
		if ((int)amount >= health)
		{
			health = 0;
			std::cout << RED << name << " died!" << RESET << std::endl;
		}
		else
		{
			health -= (int)amount;
			std::cout << "It now has " << health << " HP!" << std::endl;
		}
	}
}

// Heals ClapTrap for 'amount' points
void	ClapTrap::beRepaired(unsigned int amount) {
	if (!health)
		std::cout << RED << "ClapTrap " << name << " is dead." << RESET << std::endl;
	else if (!energy)
		std::cout << YELLOW << "ClapTrap " << name << " is too tired to repair." << RESET << std::endl;
	else
	{
		health += (int)amount;
		energy--;
		std::cout << GREEN << "ClapTrap " << name << " repairs " << amount << " HP! It now has " << health << " HP."  << RESET << std::endl;
	}
}