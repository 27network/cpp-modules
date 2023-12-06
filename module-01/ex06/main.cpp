/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 07:19:42 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 07:23:40 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char *argv[])
{
	Harl	harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Usage: " << argv[0] << " <level>" << std::endl;
	return (0);
}
