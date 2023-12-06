/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:30:27 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 11:10:08 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void): _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " magically appears into existance!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " magically appears into existance!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " was destroyed!" << std::endl;
}

std::string ClapTrap::getType(void) const
{
	return ("ClapTrap");
}

ClapTrap::ClapTrap(ClapTrap &copy): _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& x)
{
	if (this == &x)
		return (*this);
	this->_name = x._name;
	this->_hitPoints = x._hitPoints;
	this->_energyPoints = x._energyPoints;
	this->_attackDamage = x._attackDamage;
	return (*this);
}

bool	ClapTrap::_checkEnergy(void)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		return (true);
	}
	else
	{
		std::cout << this->getType() << " " << this->_name << " is out of energy!" << std::endl;
		return (false);
	}
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_hitPoints > 0 && this->_checkEnergy()) {
		std::cout << this->getType() << " " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_checkEnergy()) {
		this->_hitPoints += amount;
		std::cout << this->getType() << " " << this->_name << " is repaired by " << amount << " points!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << this->getType() << " " << this->_name << " take " << amount << " points of damage!" << std::endl;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		if (this->_hitPoints == 0)
			std::cout << this->getType() << " " << this->_name << " is dead!" << std::endl;
	}
	else
		std::cout << this->getType() << " " << this->_name << " is already dead!" << std::endl;
}
