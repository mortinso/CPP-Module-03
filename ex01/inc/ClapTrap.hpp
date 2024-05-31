/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:30:12 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 15:33:43 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	protected:
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

		// Setter

		// Methods
		void	showStats( void );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif
