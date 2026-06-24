/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:39 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:23:11 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter 
{
    public:
	    Character();
	    Character(std::string name);
	    Character(const Character& other);
	    ~Character();
	    Character& operator=(const Character& other);	
	    const std::string& getName() const;
	    void equip(AMateria* m);
	    void unequip(int idx);
	    void use(int idx, ICharacter& target);
    private:
	    std::string _name;
	    AMateria*	_inventory[4];
	    int			_idx;
};

#endif