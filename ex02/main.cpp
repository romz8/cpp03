/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:08:03 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/23 21:07:11 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Testing ClapTrap
    std::cout << "\33[33m*****************************" << std::endl;
    std::cout << "============ ClapTrap Tests ========" << std::endl;
    std::cout << "************************************\33[0m" << std::endl;
    ClapTrap claptrap("Clap");

    claptrap.attack("Enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    // Testing ScavTrap
    std::cout << std::endl;
    std::cout << "\33[33m*****************************" << std::endl;
    std::cout << "======== ScavTrap Tests =============" << std::endl;
    std::cout << "************************************\33[0m" << std::endl;
    ScavTrap scavtrap("Scav");

    scavtrap.attack("Enemy");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    // Testing FragTrap
    std::cout << std::endl;
    std::cout << "\33[33m*****************************" << std::endl;
    std::cout << "============ FragTrap Tests ==========" << std::endl;
    std::cout << "************************************\33[0m" << std::endl;
    FragTrap fragtrap("Frag");
    std::cout << std::endl;
    FragTrap useless = FragTrap();
    std::cout << std::endl;
    FragTrap twin = fragtrap;

    fragtrap.attack("Enemy");
    fragtrap.takeDamage(25);
    fragtrap.beRepaired(15);
    fragtrap.highFivesGuys();
    fragtrap.takeDamage(600);
    fragtrap.highFivesGuys();

    // Demonstrating construction and destruction ordering
    std::cout << std::endl;
    std::cout << "\33[32m*****************************" << std::endl;
    std::cout << "=== Construction and Destruction Ordering ===" << std::endl;
    std::cout << "************************************\33[0m" << std::endl;
    std::cout << std::endl;
    {
        std::cout << "Creating ScavTrap" << std::endl;
        ScavTrap tempScav("TempScav");
        std::cout << std::endl;
    } // TempScav goes out of scope here
    std::cout << std::endl;
    {
        std::cout << "Creating FragTrap" << std::endl;
        FragTrap tempFrag("TempFrag");
        std::cout << std::endl;
    } // TempFrag goes out of scope here

    std::cout << std::endl;
    std::cout << "\33[33m*****************************" << std::endl;
    std::cout << "=== End of Tests ===" << std::endl;
    std::cout << "************************************\33[0m" << std::endl;
    return 0;
}
