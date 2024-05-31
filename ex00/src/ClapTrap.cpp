/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:30:07 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 14:49:53 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap( void ) : name("null"), health(10), energy(10), damage(0) {
	std::cout << "Default constructor called" <<std::endl;
}

ClapTrap::ClapTrap( const std::string &_name ) : name(_name) , health(10) , energy(10), damage(0){
	std::cout << _name <<": constructor called" <<std::endl;
}

// Copy constructor
ClapTrap::ClapTrap( const ClapTrap &claptrap ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = claptrap;
}

// Destructor called
ClapTrap::~ClapTrap( void ) {
	std::cout << this->name << ": Destructor called" <<std::endl;
}

// Copy assignment operator
ClapTrap&	ClapTrap::operator = ( const ClapTrap &claptrap ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &claptrap)
	{
		this->name = claptrap.name;
		this->health = claptrap.health;
		this->energy = claptrap.energy;
		this->damage = claptrap.damage;
	}
	return (*this);
}

// Getter for name
std::string ClapTrap::getName( void ) {
	return this->name;
}

// Show ClapTraps stats
void ClapTrap::showStats(void)
{
    std::cout << "ClapTrap " << this->name << " has " << this->health  << " HP, " << this->energy 
        << " energy and deals " << this->damage << " damage." << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (!this->health)
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
	else if (!this->energy)
		std::cout << "ClapTrap " << this->name << " is too tired to attack " << target << "." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << " for " << this->damage << " damage points!" << std::endl;
		this->energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!this->health)
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
	else if (!this->energy)
		std::cout << "ClapTrap " << this->name << " is too tired to attack." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damage points! ";
		if (amount - this->health <= 0)
		{
			this->health = 0;
			std::cout <<  "It died!" << std::endl;
		}
		else
		{
			this->health -= amount;
			std::cout <<  "It now has " << this->health << " HP!" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->health)
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
	else if (!this->energy)
		std::cout << "ClapTrap " << this->name << " is too tired! Can't repair." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " repairs " << amount << " HP! ";
		this->health += amount;
		this->energy--;
		std::cout << "It now has " << this->health << " HP." << std::endl;
	}
}