/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:29:34 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:04:35 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
		return NULL;
    Zombie* horde = NULL;
    horde = new Zombie[N];
    if (!horde)
        return (NULL);
    for (int i = 0; i < N; i++)
        horde[i].setname(name);
    return (horde);
}
