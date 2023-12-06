/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:50:07 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 11:12:28 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name << " magically appears into existance!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " was destroyed!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has enterred in Gatekeeper mode" << std::endl;
}

std::string ScavTrap::getType(void) const
{
	return "ScavTrap";
}

ScavTrap::ScavTrap(ScavTrap &copy): ClapTrap(copy._name)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& x)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &x)
		return (*this);
	this->_name = x._name;
	this->_hitPoints = x._hitPoints;
	this->_energyPoints = x._energyPoints;
	this->_attackDamage = x._attackDamage;
	return (*this);
}
