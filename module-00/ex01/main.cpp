/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:45:01 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 02:04:30 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	std::cout << std::endl << " >>> Welcome to the PhoneBook! <<< " << std::endl << std::endl;
	while (1) {
		std::cout << "Enter command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, command);
		if (command == "ADD") {
			phoneBook.addContact();
		} else if (command == "SEARCH") {
			phoneBook.searchContact();
		} else if (command == "EXIT") {
			std::cout << "Bye!" << std::endl;
			break ;
		} else {
			std::cout << "Invalid command!" << std::endl;
		}
	}
	return (0);
}