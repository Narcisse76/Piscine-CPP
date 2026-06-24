/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:42 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:23:19 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria 
{
    public:
	    Cure();
	    Cure(const Cure& other);
	    Cure& operator=(const Cure& other);
	    ~Cure();
	    AMateria* clone() const;
	    void use(ICharacter& target);
};

#endif