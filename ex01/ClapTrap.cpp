/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:40:17 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/23 18:07:21 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void header_action(std::string name);

/* Orthodox Canonical : Default Constructors, Copy constructor, Destructor Copy Assignment */

ClapTrap::ClapTrap(void)
{
	ClapTrap("");
	std::cout << "ClapTrap Default Constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name):_Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) 
{
	std::cout << "ClapTrap Constructor called for : " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout  << "ClapTrap Copy Constructor called on " << this->_Name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout  << "ClapTrap Destructor called on " << this->_Name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src)
	{
		this->_Name = src.getName();
		this->_HitPoints = src.getHitPoints();
		this->_EnergyPoints = src.getHitPoints();
		this->_AttackDamage = src.getAttackDamage();
	}
	std::cout  << "Copy Assignment Constructor called on " << this->_Name << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (!(this->_EnergyPoints > 0 && this->_HitPoints > 0))
	{
		std::cout << this->_Name << "\33[31m Can't do anything, no more Energy or Hit points\33[0m";
		std::cout << std::endl;
		return ;
	}
	header_action(this->_Name);
	std::cout << "ClapTrap " << this->_Name << " attacks " << target <<", causing ";
	std::cout << this->_AttackDamage << " points of damage!" << std::endl;
	this->_EnergyPoints--;
	if (!_EnergyPoints)
		std::cout << "\33[41mClapTrap " << this->_Name << " Died after running out of Energy Points\33[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_Name << " receives " << amount;
	std::cout << " points of damage!" << std::endl;
	if (this->getHitPoints() - (int) amount >= 0)
		this->_HitPoints -= amount;
	else
		this->_HitPoints = 0;
	if (!_HitPoints)
		std::cout << "\33[33mClapTrap " << this->_Name << " is Out of Hit Points\33[0m" << std::endl;
	else
		std::cout << "ClapTrap " << this->_Name << " has " << this->_HitPoints << " Hitpoints left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!(this->_EnergyPoints > 0 && this->_HitPoints > 0))
	{
		std::cout << this->_Name << "\33[31m Can't do anything, no more Energy or Hit points\33[0m";
		std::cout << std::endl;
		return;
	}
	header_action(this->_Name);
	std::cout << "ClapTrap " << this->_Name << " has : " << this->_HitPoints << " Hit points left";
	std::cout << std::endl;
	std::cout << " it repairs itself by " << amount << " number of points";
	this->_HitPoints += amount;
	this->_EnergyPoints--;
	std::cout << std::endl;
	std::cout << " it now has : " << this->_HitPoints << " number of Hit points" << std::endl;
	std::cout << " it now has : " << this->_EnergyPoints << " number of Energy points" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_Name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_HitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_EnergyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_AttackDamage);
}


void header_action(std::string name)
{
	std::cout << std::endl;
	std::cout << "\33[94m*********************** New Action ************************" << std::endl;
	std::cout << "        ******* FROM: "<< name << " *******" << std::endl;
	std::cout << "***********************************************************\33[0m" << std::endl;
	std::cout << std::endl;
}
