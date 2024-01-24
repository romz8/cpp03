/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:11:59 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/24 13:53:26 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/********************** Canonical Constructor / Destructors ******************/

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	std::cout << "Default (Nameless) DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _Name(name)
{
	this->_HitPoints = FragHP;
	this->_EnergyPoints = ScavEP;
	this->_AttackDamage = FragAP;
	std::cout << "DiamondTrap Name Constructor on " << this->_Name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(), ScavTrap(), FragTrap()
{
	*this = src;
	std::cout << "DiamondTrap Copy Constructor on " << this->_Name << std::endl;
	
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		this->_Name = src._Name;
		this->_HitPoints = src.getHitPoints();
		this->_EnergyPoints = src.getEnergyPoints();
		this->_AttackDamage = src.getAttackDamage();
	}
	std::cout << "DiamondTrap operator = on " << this->_Name << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Default DiamondTrap Destructor called on " << this->_Name << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is " << this->_Name << std::endl;
	std::cout << "DiamondTrap' ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}


