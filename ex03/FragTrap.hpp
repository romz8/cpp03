/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:27:09 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/24 13:44:54 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define FragHP 100
# define FragEP 100 
# define FragAP 30
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap (const FragTrap& src);
	FragTrap& operator=(const FragTrap& src);
	~FragTrap(void);
	void highFivesGuys(void);
};

#endif
