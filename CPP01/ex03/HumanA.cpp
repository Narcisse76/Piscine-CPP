/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:30:19 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:07:14 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string& name, Weapon& hand)
    :_name(name), _hand(hand)
{   
}

HumanA::~HumanA(void)
{
    
}

void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _hand.getType() << std::endl;
}
