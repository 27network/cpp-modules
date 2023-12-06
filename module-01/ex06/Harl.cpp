/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 07:09:35 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 07:29:20 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::complain(std::string level_str)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t size = sizeof(levels) / sizeof(levels[0]);

	size_t level = 0;
	while (level < size) {
		if (levels[level] == level_str)
			break;
		level++;
	}

	switch (level)
	{
		case 0: 
			this->debug();
			__attribute__ ((fallthrough));
		case 1: 
			this->info();
			__attribute__ ((fallthrough));
		case 2: 
			this->warning();
			__attribute__ ((fallthrough));
		case 3: 
			this->error(); 
			break;
		default:
			std::cout << "?? " << "Invalid level" << std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << "DEBUG: " << "test1 test2 test3.. no im not gonna use a debugger" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO: " << "this is informational message mmmm yes" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING: " << "E" << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR: " << "Segmentation fault." << std::endl;
}
