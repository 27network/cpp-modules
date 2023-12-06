/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 07:09:35 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 07:20:31 by kiroussa         ###   ########.fr       */
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

void Harl::complain(std::string level)
{
	void (Harl::*f[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string s[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t len = sizeof(s) / sizeof(s[0]);
	bool found = false;
	for (size_t i = 0; i < len; i++) {
		if (level == s[i]) {
			(this->*f[i])();
			found = true;
			break;
		}
	}
	if (!found) 
		std::cout << "??? Invalid level" << std::endl;
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
