/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 02:35:30 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 02:36:45 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	horde = zombieHorde(10, "Mr. Zombizzar");

	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
