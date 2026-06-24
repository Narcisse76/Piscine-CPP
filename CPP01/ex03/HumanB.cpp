/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:30:24 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:07:59 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string& name)
    : _name(name)
{
}

HumanB::~HumanB()
{
    
}

void HumanB::attack() const
{
    if (_hand)
        std::cout << _name << " attacks with their " << (*_hand).getType() << std::endl;
    else
        std::cout << _name << " can't attack. He doesn't have weapon." << std::endl;
}

void HumanB::setWeapon(Weapon& hand)
{
    _hand = &hand;
}
