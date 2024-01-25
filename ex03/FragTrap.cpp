/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:27:43 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/25 15:10:50 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_HitPoints = FragHP;
	this->_EnergyPoints = FragEP;
	this->_AttackDamage = FragAP;
	std::cout << "Built a FragTrap with Default (Nameless) Constructor" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_HitPoints = FragHP;
	this->_EnergyPoints = FragEP;
	this->_AttackDamage = FragAP;
	std::cout << "FragTrap " << this->_Name << " built with its name Constructor" << std::endl;
}
FragTrap::FragTrap (const FragTrap& src)
{
	*this = src;
	std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	if (this != &src)
	{
		this->_Name = src.getName();
		this->_AttackDamage = src.getAttackDamage();
		this->_HitPoints = src.getHitPoints();
		this->_EnergyPoints = src.getEnergyPoints();
	}
	std::cout << "FragTrap Copy Assignment Constructor" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Default FragTrap Destructor called on: " << this->getName() << std::endl;
}

/****************** Member function **************************/
void FragTrap::highFivesGuys(void)
{
	if (!(this->_EnergyPoints > 0 && this->_HitPoints > 0))
	{
		std::cout << this->_Name << "\33[31m Can't do anything, no more Energy or Hit points\33[0m";
		std::cout << std::endl;
		return ;
	}
	std::cout << "FragTrap : " << this->getName()<< " / ClapTrap name : " << this->_Name << " is requesting a high five" << std::endl;
}
