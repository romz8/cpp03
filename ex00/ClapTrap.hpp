/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:30:28 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/22 19:46:31 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <string>
# include <iostream>

class ClapTrap
{
private:
	std::string _Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;
	
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap& src);
	ClapTrap& operator=(const ClapTrap& src);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string	getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;
};

#endif
