/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:30:22 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:07:26 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A__
#define __HUMAN_A__

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(const std::string& name, Weapon& hand);
        ~HumanA();
        void attack() const; 
    private:
        std::string _name;
        Weapon& _hand;
};

#endif
