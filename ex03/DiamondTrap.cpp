/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:11:59 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/25 15:17:33 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/********************** Canonical Constructor / Destructors ******************/

DiamondTrap::DiamondTrap(void) : ClapTrap("Unamed_clap_name"), ScavTrap(), FragTrap()
{
	this->_Name = "Unamed";
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
	std::cout << "DiamondTrap operator = on " << this->_Name << std::endl;
	if (this != &src)
	{
		this->_Name = src._Name;
		this->_HitPoints = src.getHitPoints();
		this->_EnergyPoints = src.getEnergyPoints();
		this->_AttackDamage = src.getAttackDamage();
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Default DiamondTrap Destructor called on " << this->_Name << std::endl;
}

/*********************** Member Functions *************************************/

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is " << this->_Name << std::endl;
	std::cout << "DiamondTrap' ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}
/*
the purpose of this function is to use  Name looking function getName() in base class (changed to virtual)
and therefore display diamdon name in derived class (Scav, Frag)
*/
std::string	DiamondTrap::getName(void) const
{
	return (this->_Name);
}

/********************** Overloading Stream Operator to check status ******/

std::ostream& operator<<(std::ostream& os, const DiamondTrap& src)
{
	std::cout << "Diamond Hit Points: " << src.getHitPoints();
	std::cout << ",  Diamond Energy Points: " << src.getEnergyPoints();
	std::cout << ",  Diamond Attack Points: " << src.getAttackDamage();
	return (os);
}
