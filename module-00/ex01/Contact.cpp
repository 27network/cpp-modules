/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:44:27 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 07:00:51 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	_initialized = false;
}

Contact::~Contact(void)
{
}

void	Contact::_prompt(std::string prompt, std::string &input)
{
	input = "";

	while (input.empty()) {
		std::cout << "  " << prompt << ": ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "  " << prompt << " can't be empty!" << std::endl;
	}
}

void	Contact::initContact(void)
{
	std::cout << "Enter contact information:" << std::endl;
	_prompt("First name", _firstName);
	_prompt("Last name", _lastName);
	_prompt("Nickname", _nickname);
	_prompt("Phone number", _phoneNumber);
	_prompt("Darkest secret", _darkestSecret);
	_initialized = true;
}

bool	Contact::isInitialized(void)
{
	return (_initialized);
}

void	Contact::_display(std::string str)
{
	if (str.length() > 10) {
		std::cout << str.substr(0, 9) << ".";
	} else {
		std::cout << std::setw(10) << str;
	}
}

void	Contact::displayContact(bool inlineDisplay)
{
	if (inlineDisplay) {
		std::cout << "|";
		_display(_firstName);
		std::cout << "|";
		_display(_lastName);
		std::cout << "|";
		_display(_nickname);
		std::cout << std::endl;
	} else {
		std::cout << "First name: " << _firstName << std::endl;
		std::cout << "Last name: " << _lastName << std::endl;
		std::cout << "Nickname: " << _nickname << std::endl;
		std::cout << "Phone number: " << _phoneNumber << std::endl;
		std::cout << "Darkest secret: " << _darkestSecret << std::endl;
	}
}
