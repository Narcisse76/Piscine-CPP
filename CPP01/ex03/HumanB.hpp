/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:30:26 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:08:11 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B__
# define __HUMAN_B__

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(const std::string& name);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon& arm);
    private:
        std::string _name;
        Weapon* _hand;
};

#endif
