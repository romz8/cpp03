/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:53:02 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/23 21:01:08 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "Nameless ScavTrap created with Default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap created - built on top of CrapTrap Name : "<< this->getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	*this = src;
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	if(this != &src)
	{
		this->_Name = src.getName();
		this->_AttackDamage = src.getAttackDamage();
		this->_HitPoints = src.getHitPoints();
		this->_EnergyPoints = src.getEnergyPoints();
	}
	std::cout << "ScavTrap Copy Assignment Constructor Called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Default ScavTrap Destructor called on: " << this->getName() << std::endl;
	std::cout << "now calling base class Destructor " <<  std::endl;
}

void ScavTrap::guardGate(void)
{
	if (!(this->_EnergyPoints > 0 && this->_HitPoints > 0))
	{
		std::cout << this->_Name << "\33[31m Can't do anything, no more Energy or Hit points\33[0m";
		std::cout << std::endl;
		return ;
	}
	std::cout << "ScavTrap "<< this->getName() <<" is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!(this->_EnergyPoints > 0 && this->_HitPoints > 0))
	{
		std::cout << this->_Name << "\33[31m Can't do anything, no more Energy or Hit points\33[0m";
		std::cout << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_Name << " does its special attack on " << target <<", causing ";
	std::cout << this->_AttackDamage << " points of damage!" << std::endl;
	this->_EnergyPoints--;
	if (!_EnergyPoints)
		std::cout << "\33[41mClapTrap " << this->_Name << " Died after running out of Energy Points\33[0m" << std::endl;
}


