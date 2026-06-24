/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:56:26 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:08:50 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
    _type = type;
}

Weapon::~Weapon(void)
{
    
}

void Weapon::setType(const std::string& type)
{
    _type = type;
}

const std::string& Weapon::getType(void) const
{
	return _type;
}
