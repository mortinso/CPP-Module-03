/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:30:12 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/28 16:30:28 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		std::string	name;
		int			health;
		int			energy;
		int			damage;

		ClapTrap( void );
	public:
		// Constructors
		ClapTrap( const ClapTrap &claptrap );
		ClapTrap( const std::string &_name );

		// Destructor
		~ClapTrap( void );

		// Copy assignment operator
		ClapTrap&	operator = ( const ClapTrap &claptrap );

		// Getter

		// Setter

		// Methods
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif
