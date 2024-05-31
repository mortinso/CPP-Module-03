/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:39:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 17:07:10 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int	main(void) {
	ScavTrap jake("Jake");

	jake.attack("self");
	jake.takeDamage(jake.getDamage());
	jake.attack("self");
	jake.takeDamage(jake.getDamage());
	jake.showStats();
	jake.beRepaired(jake.getDamage());
	jake.showStats();
	jake.guardGate();
}