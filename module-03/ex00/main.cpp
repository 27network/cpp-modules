/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:38:34 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 08:43:19 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("tmoron");

	clapTrap.attack("ltouzali");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	clapTrap.attack("ltouzali");
	clapTrap.takeDamage(20);
	clapTrap.attack("ltouzali");
	return (0);
}
