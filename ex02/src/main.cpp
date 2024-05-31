/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:39:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 17:19:51 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int	main(void) {
	ClapTrap ray("Ray");
	ScavTrap jake("Jake");

	std::cout << std::endl;

	jake.showStats();
	ray.beRepaired(15);
	ray.showStats();
	
	std::cout << std::endl;

	jake.attack(ray.getName());
	ray.takeDamage(jake.getDamage());
	ray.attack(jake.getName());
	jake.takeDamage(ray.getDamage());
	jake.beRepaired(5);
	
	std::cout << std::endl;
	
	ray.showStats();
	jake.showStats();
	
	std::cout << std::endl;
	
	jake.guardGate();
	
	std::cout << std::endl;
}