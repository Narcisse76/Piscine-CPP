/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:37:58 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:01:34 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *z = NULL;
    z = new Zombie(name);
    if (!z)
    {
        std::cerr << "Allocation failed." << std::endl;
        return NULL;
    }
    return (z);
}
