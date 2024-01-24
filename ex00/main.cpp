/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:08:03 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/24 14:02:05 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "\33[32m*****************************" << std::endl;
    std::cout << "=== Constructor Test ===" << std::endl;
    std::cout << "************************************\33[0m" << std::endl;
	
	ClapTrap	Edward("Elrich");
	std::cout << std::endl;
	ClapTrap	const Envy("Envy");
	std::cout << std::endl;
	ClapTrap	Ed = Edward;
	std::cout << std::endl;
	ClapTrap	Env(Envy);
	std::cout << std::endl;
	ClapTrap	useless = ClapTrap();

	
	std::cout << std::endl;
	std::cout << "\33[32m*****************************" << std::endl;
    std::cout << "====== Member Functions Test ===" << std::endl;
    std::cout << "************************************\33[0m" << std::endl;
	Ed.attack("Envy");
	Env.takeDamage(8);
	std::cout << std::endl;
	
	std::cout << std::endl;
	Env.attack("Edward");
	Ed.takeDamage(5);
	std::cout << std::endl;

	std::cout << std::endl;
	Ed.attack("Envy");
	Env.takeDamage(1);
	std::cout << std::endl;

	std::cout << std::endl;
	Env.attack("Edward");
	Ed.takeDamage(2);
	Env.beRepaired(5);
	std::cout << std::endl;

	std::cout << std::endl;
	Ed.attack("Envy");
	Env.takeDamage(2);
	Ed.beRepaired(500);
	std::cout << std::endl;

	std::cout << std::endl;
	Env.attack("Edward");
	Ed.takeDamage(3);
	std::cout << std::endl;

	std::cout << std::endl;
	Ed.attack("Envy");
	Env.takeDamage(2);
	std::cout << std::endl;

	std::cout << std::endl;
	Ed.attack("Envy");
	Env.takeDamage(1);
	Ed.attack("Envy");
	std::cout << std::endl;
	
	for (int x = 0; x < 8; ++x)
		Env.attack("Ed");
	std::cout << std::endl;
	Ed.attack("Envy");
	Env.takeDamage(2);
	Ed.takeDamage(3000000);
}
