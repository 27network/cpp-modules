/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:44:23 by kiroussa          #+#    #+#             */
/*   Updated: 2024/01/04 00:14:29 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook(void)
{
	_nbContacts = 0;
	_index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::addContact(void)
{
	if (_nbContacts < 8) {
		_nbContacts++;
	}
	_contacts[_index % 8].initContact();
	_index++;
}

void	PhoneBook::searchContact(void)
{
	int			i;
	std::string	index;

	if (_nbContacts == 0) {
		std::cout << "PhoneBook is empty!" << std::endl;
		return ;
	}
	std::cout << std::endl << "     Index|First name| Last name|  Nickname" << std::endl;
	i = 0;
	while (i < _nbContacts) {
		std::cout << std::setw(10) << i;
		_contacts[i].displayContact(true);
		i++;
	}
	std::cout << std::endl << "Enter index: ";
	std::getline(std::cin, index);
	if (std::cin.eof()) {
		std::cout << std::endl;
		exit(0);
	}
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7' && index[0] - '0' < _nbContacts) {
		_contacts[index[0] - '0'].displayContact(false);
	} else {
		std::cout << "Invalid index!" << std::endl;
	}
}
