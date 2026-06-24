/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:52:18 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:09:01 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon(const std::string& type);
        ~Weapon();
        const   std::string& getType(void) const;
        void    setType(const std::string& newType);
        
    private:
        std::string _type;
};

#endif
