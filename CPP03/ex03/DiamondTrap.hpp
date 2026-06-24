/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:05:27 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 13:41:04 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
	    DiamondTrap();
	    DiamondTrap(const std::string& name);
	    DiamondTrap(const DiamondTrap& src);
	    DiamondTrap& operator=(const DiamondTrap& other);
	    ~DiamondTrap();
	    void whoAmI();
	    using ScavTrap::attack;
    private:
	    std::string _name;
};

#endif