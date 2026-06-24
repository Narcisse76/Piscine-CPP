/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:30:18 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:04:06 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde = zombieHorde(10, "BrainEater");
    for (int i = 0; i < 10; i++)
        horde[i].announce();
    delete[] horde;
}
