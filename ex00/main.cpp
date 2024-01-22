/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:08:03 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/22 19:46:39 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	Edward("Elrich");
	ClapTrap	const Envy("Envy");
	ClapTrap	Ed = Edward;
	ClapTrap	Env(Envy);

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
	Ed.beRepaired(5);

	Env.attack("Edward");
	Ed.takeDamage(3);

	Ed.attack("Envy");
	Env.takeDamage(2);

	Ed.attack("Envy");
	Env.takeDamage(1);
	Ed.attack("Envy");
	Env.takeDamage(1);
	
	for (int x = 0; x < 8; ++x)
		Ed.attack("Envy");

	Env.attack("Edward");
}
