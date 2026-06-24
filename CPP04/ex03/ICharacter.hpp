/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:48 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:23:40 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include <iostream>

class AMateria;

class ICharacter
{
    public:
	    virtual ~ICharacter() {}
	    virtual std::string const & getName() const = 0;
	    virtual void equip(AMateria* m) = 0;
	    virtual void unequip(int idx) = 0;
	    virtual void use(int idx, ICharacter& target) = 0;
};

#endif