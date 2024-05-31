/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:39:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 18:16:50 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int	main(void) {
	ClapTrap paul("Paul");
	ScavTrap jake("Jake");
	FragTrap rosa("Rosa");

	std::cout << std::endl;

	paul.showStats();
	jake.showStats();
	rosa.showStats();
	
	std::cout << std::endl;

	rosa.attack(jake.getName());
	jake.takeDamage(rosa.getDamage());
	paul.beRepaired(5);
	jake.attack(paul.getName());
	paul.takeDamage(jake.getDamage());
	paul.beRepaired(5);
	
	std::cout << std::endl;
	
	paul.showStats();
	jake.showStats();
	rosa.showStats();
	
	std::cout << std::endl;
	
	jake.guardGate();
	rosa.highFivesGuys();
	
	std::cout << std::endl;
}