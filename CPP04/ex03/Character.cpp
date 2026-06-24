/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:37 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:23:08 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("Default"), _idx(0) 
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = 0;
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name), _idx(0) 
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = 0;
    std::cout << "Character constructor called - Name: " << _name << std::endl;
}

Character::Character(const Character& other) : _name(other._name), _idx(other._idx) 
{
	for (int i = 0; i < 4; ++i) 
    {
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = 0;
	}
    std::cout << "Character copy constructor called - Name: " << _name << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
		delete _inventory[i];
    std::cout << "Character destructor called for: " << _name << std::endl;
}

Character& Character::operator=(const Character& other) 
{
	if (this != &other) 
    {
		_name = other._name;
		_idx = other._idx;
		for (int i = 0; i < 4; ++i) 
        {
			delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = 0;
		}
        std::cout << "AMateria assignement operator called - Name: " << _name << std::endl;
	}
	return *this;
}

const std::string& Character::getName() const 
{
	return _name;
}

void Character::equip(AMateria* m) 
{
	if (!m) 
    {
		std::cout << "Cannot equip a null AMateria" << std::endl;
		return;
	}
	if (_idx >= 4) 
    {
		std::cout << "Inventory full, cannot equip " << m->getType() << ". Deleting it." << std::endl;
		delete m;
		return;
	}
	_inventory[_idx++] = m;
	std::cout << "Equipped " << m->getType() << " to " << _name << " at slot " << (_idx-1) << std::endl;
}

void Character::unequip(int idx) 
{
	if (idx >= 0 && idx < 4 && _inventory[idx]) 
    {
		std::cout << "Unequipped " << _inventory[idx]->getType() << " from " << _name << std::endl;
		delete _inventory[idx];
		_inventory[idx] = 0;
	}
    else 
    {
		std::cout << "Invalid index or no AMateria to unequip" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) 
{
	if (idx >= 0 && idx < 4 && _inventory[idx]) 
    {
		std::cout << "\033[34m" << _name << " uses " << _inventory[idx]->getType() << " on " << target.getName() << "\033[0m" << std::endl;
		_inventory[idx]->use(target);
	} else {
		std::cout << "Invalid index or no AMateria to use" << std::endl;
	}
}