/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:46 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:23:26 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria 
{
    public:
	    Ice();
	    Ice(const Ice& other);
	    Ice& operator=(const Ice& other);
	    ~Ice();
	    AMateria* clone() const;
	    void use(ICharacter& target);
};

#endif