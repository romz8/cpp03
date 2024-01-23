/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:08:03 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/23 17:56:30 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // Testing ClapTrap
    std::cout << "\33[33m*************************" << std::endl;
	std::cout << "=== ClapTrap Tests ===" << std::endl;
	std::cout << "*************************\33[0m" << std::endl;
    ClapTrap clap("CL4P-TP");

    clap.attack("Target A");
    clap.takeDamage(4);
    clap.beRepaired(2);

    // Testing ScavTrap
	std::cout << std::endl;
	std::cout << "\33[33m*************************" << std::endl;
    std::cout << "=== ScavTrap Tests ===" << std::endl;
	std::cout << "*************************\33[0m" << std::endl;
    ScavTrap scav("SC4V-TP");

    scav.attack("Target B");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();
	for (int i = 0; i < 50; i++)
		scav.beRepaired(50);
	scav.guardGate();
	scav.attack("Target C");
	scav.takeDamage(3000000);
    // Objects are automatically destroyed at the end of scope
    std::cout << std::endl;
	std::cout << "\33[33m*************************" << std::endl;
	std::cout << "=== End of Tests ===" << std::endl;
	std::cout << "*************************\33[0m" << std::endl;
    return 0;
}
