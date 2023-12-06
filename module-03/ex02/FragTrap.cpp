/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:50:07 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 11:59:40 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " magically appears into existance!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " was destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->getType() << " " << this->_name << " is asking for high fives!" << std::endl;
}

std::string FragTrap::getType(void) const
{
	return "FragTrap";
}

FragTrap::FragTrap(FragTrap &copy): ClapTrap(copy._name)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& x)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this == &x)
		return (*this);
	this->_name = x._name;
	this->_hitPoints = x._hitPoints;
	this->_energyPoints = x._energyPoints;
	this->_attackDamage = x._attackDamage;
	return (*this);
}
