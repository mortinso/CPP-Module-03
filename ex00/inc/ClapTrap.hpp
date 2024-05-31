/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:30:12 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 17:16:45 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

// Colors
# define RED "\e[91m"
# define GREEN "\e[92m"
# define YELLOW "\e[93m"
# define INVERT "\e[90m\e[107m"
# define RESET "\e[0m"

class ClapTrap {
	private:
		std::string	name;
		int			health;
		int			energy;
		int			damage;

	public:
		// Constructors
		ClapTrap( void );
		ClapTrap( const ClapTrap &claptrap );
		ClapTrap( const std::string &_name );

		// Destructor
		~ClapTrap( void );

		// Copy assignment operator overload
		ClapTrap&	operator = ( const ClapTrap &claptrap );

		// Getter
		std::string	getName( void );
		int			getHealth( void );
		int			getEnergy( void );
		int			getDamage( void );

		// Methods
		void	showStats( void );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif
