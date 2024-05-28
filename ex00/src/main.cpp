/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:39:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/28 16:32:49 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/ClapTrap.hpp"

int	main(void) {
	{
		std::cout << "\e[90m\e[107mEnergy loss test:\e[0m" << std::endl;

		ClapTrap jim("Jim");

		// Spend all energy points
		for (int i = 0; i < 10; i++)
			jim.attack("someone");

		// Try attacking
		jim.attack("Bob");

		// Try repairing
		jim.beRepaired(1);
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "\e[90m\e[107mDeath test:\e[0m" << std::endl;
		ClapTrap bob("Bob");

		// Take 1 damage 3 times
		for (int i = 0; i < 3; i++)
			bob.takeDamage(1);

		// Kill
		bob.takeDamage(7);

		// Try attacking
		bob.attack("someone");

		// Try repairing
		bob.beRepaired(1);
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "\e[90m\e[107mRepair test:\e[0m" << std::endl;
		ClapTrap guy("Guy");

		// Guy takes 5 damage
		guy.takeDamage(5);

		// Creates Jack from Guy
		ClapTrap jack(guy);

		// Jack repairs 1 HP 5 times
		for (int i = 0; i < 5; i++)
			jack.beRepaired(1);

		// Guy heals for 20
		guy.beRepaired(20);
	}
}