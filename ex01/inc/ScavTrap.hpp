/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:48:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/29 12:26:07 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
	private:

	public:
		// Constructors
		ScavTrap( void );
		ScavTrap( const ScavTrap &scavtrap );

		// Destructor
		~ScavTrap( void );

		// Copy assignment operator
		ScavTrap & operator = ( const ScavTrap &scavtrap );

		// Getter

		// Setter

		// Methods
};

#endif
