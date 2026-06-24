/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:28:06 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:04:22 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HORD_HPP__
# define __ZOMBIE_HORD_HPP__

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void    announce(void) const;
        void    setname(std::string name);
    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
