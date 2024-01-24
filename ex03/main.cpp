/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:08:03 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/24 13:56:20 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() 
{

    std::cout << "\33[32m*****************************" << std::endl;
    std::cout << "=== DiamondTrap Test ===" << std::endl;
    std::cout << "************************************\33[0m" << std::endl;
    
    std::cout << std::endl;
    std::cout << "=== constructor Test ===" << std::endl;
    std::cout << std::endl;
    std::cout << "\33[32m name constructor \33[0m" << std::endl;
    DiamondTrap diamond("D14M-TP");
    std::cout << std::endl;
    std::cout << "\33[32m default constructor \33[0m" << std::endl;
    DiamondTrap useless = DiamondTrap();
    std::cout << std::endl;
    std::cout << "\33[32m copy constructor \33[0m" << std::endl;
    DiamondTrap copy(diamond);
    std::cout << std::endl;
    std::cout << "\33[32m Assign operator \33[0m" << std::endl;
    DiamondTrap assigned = copy;
    
    std::cout << std::endl;
    std::cout << "=== member functions Test ===" << std::endl;
    std::cout << std::endl;
    
    std::cout << "\33[32m checking attack is ScavTrap \33[0m" << std::endl;
    diamond.attack("Target");
    std::cout << std::endl;
    diamond.takeDamage(6);
    std::cout << std::endl;
    diamond.beRepaired(5);
    std::cout << std::endl;
    diamond.guardGate();
    std::cout << std::endl;
    diamond.highFivesGuys();
    std::cout << std::endl;
    std::cout << "\33[32m WhoamI test \33[0m" << std::endl;
    diamond.whoAmI();

    std::cout << std::endl;
    std::cout << "\33[33m*****************************" << std::endl;
    std::cout << "=== End of Tests ===" << std::endl;
    std::cout << "************************************\33[0m" << std::endl;
    return 0;
}
