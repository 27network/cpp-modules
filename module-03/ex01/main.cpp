/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:38:34 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 12:00:22 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	{
		ClapTrap	clapTrap("tmoron");

		clapTrap.attack("ltouzali");
		clapTrap.takeDamage(5);
		clapTrap.beRepaired(5);
		clapTrap.attack("ltouzali");
		clapTrap.takeDamage(20);
		clapTrap.attack("ltouzali");
	}
	std::cout << std::endl;
	{
		ScavTrap	scavTrap("mmoussou");
		
		scavTrap.attack("lbouet");
		scavTrap.guardGate();
		scavTrap.takeDamage(105);
		scavTrap.attack("lbouet");
	}
	return (0);
}
