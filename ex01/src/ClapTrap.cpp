/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:30:07 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 15:33:21 by mortins-         ###   ########.fr       */
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

// Getter for name
std::string	ClapTrap::getName( void ) {
	return name;
}

// Show ClapTrap's stats
void	ClapTrap::showStats(void)
{
	std::cout << "ClapTrap " << name << " has " << health  << " HP, " << energy << " energy and deals " << damage << " damage." << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (!health)
		std::cout << "ClapTrap " << name << " is dead." << std::endl;
	else if (!energy)
		std::cout << "ClapTrap " << name << " is too tired to attack " << target << "." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " for " << damage << " damage points!" << std::endl;
		energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!health)
		std::cout << "ClapTrap " << name << " is dead." << std::endl;
	else if (!energy)
		std::cout << "ClapTrap " << name << " is too tired to attack." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " damage points! ";
		if (amount - health <= 0)
		{
			health = 0;
			std::cout <<  "It died!" << std::endl;
		}
		else
		{
			health -= amount;
			std::cout <<  "It now has " << health << " HP!" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!health)
		std::cout << "ClapTrap " << name << " is dead." << std::endl;
	else if (!energy)
		std::cout << "ClapTrap " << name << " is too tired! Can't repair." << std::endl;
	else
	{
		health += amount;
		energy--;
		std::cout << "ClapTrap " << name << " repairs " << amount << " HP! It now has " << health << " HP." << std::endl;
	}
}