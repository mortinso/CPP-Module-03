/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:32:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/31 17:39:37 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define FRAG "\e[96mFragTrap \e[0m"

class FragTrap : public ClapTrap {
	public:
		// Constructors
		FragTrap( void );
		FragTrap( const FragTrap &fragtrap );
		FragTrap( const std::string &_name );

		// Destructor
		~FragTrap( void );

		// Copy assignment operator
		FragTrap&	operator = ( const FragTrap &fragtrap );

		// Methods
		void	showStats( void );
		void	highFivesGuys(void);
};

#endif
