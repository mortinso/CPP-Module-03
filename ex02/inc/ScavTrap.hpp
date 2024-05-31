/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:48:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 17:16:51 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define SCAV "\e[95mScavTrap \e[0m"

class ScavTrap : public ClapTrap {
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
		void	showStats( void );
		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif
