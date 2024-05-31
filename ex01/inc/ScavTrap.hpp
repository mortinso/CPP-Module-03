/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:48:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 15:36:16 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
	public:
		// Constructors
		ScavTrap( void );
		ScavTrap( const ScavTrap &scavtrap );
		ScavTrap( const std::string &_name );

		// Destructor
		~ScavTrap( void );

		// Copy assignment operator
		ScavTrap&	operator = ( const ScavTrap &scavtrap );

		// Methods
		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif
