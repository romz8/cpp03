/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:08:03 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/23 20:52:13 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	Edward("Elrich");
	ClapTrap	const Envy("Envy");
	ClapTrap	Ed = Edward;
	ClapTrap	Env(Envy);
	ClapTrap	useless = ClapTrap();

	Ed.attack("Envy");
	Env.takeDamage(8);
	
	Env.attack("Edward");
	Ed.takeDamage(5);

	Ed.attack("Envy");
	Env.takeDamage(1);

	Env.attack("Edward");
	Ed.takeDamage(2);
	Env.beRepaired(5);

	Ed.attack("Envy");
	Env.takeDamage(2);
	Ed.beRepaired(500);

	Env.attack("Edward");
	Ed.takeDamage(3);

	Ed.attack("Envy");
	Env.takeDamage(2);

	Ed.attack("Envy");
	Env.takeDamage(1);
	Ed.attack("Envy");
	
	for (int x = 0; x < 8; ++x)
		Env.attack("Ed");
	Ed.attack("Envy");
	Env.takeDamage(2);
	Ed.takeDamage(3000000);
}
