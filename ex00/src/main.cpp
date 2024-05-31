/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:39:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 16:14:22 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/ClapTrap.hpp"

int	main(void) {
	{
		// Tests if jim can attack/repair without energy
		std::cout << INVERT << "Energy loss test:" << RESET << std::endl;

		ClapTrap jim("Jim");

		for (int i = 0; i < 10; i++)
			jim.attack("someone");

		jim.showStats();
		jim.attack("someone");
		jim.beRepaired(1);
	}
	{
		// Tests if 'takeDamage()' works and if ClapTrap can attack/repair when it's dead
		std::cout << std::endl << INVERT << "Death test:" << RESET << std::endl;
		ClapTrap bob("Bob");

		bob.takeDamage(bob.getHealth());
		bob.showStats();
		bob.attack("someone");
		bob.beRepaired(1);
	}
	{
		// Tests if the 'beRepaired()' function works
		std::cout << std::endl << INVERT << "Repair test:" << RESET << std::endl;
		ClapTrap guy("Guy");

		guy.beRepaired(20);
		guy.showStats();
	}
}