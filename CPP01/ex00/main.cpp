/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:49:37 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:01:58 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "Test randomChump :" << std::endl;
    randomChump("CHUMP");
    randomChump("GRUMP");
    randomChump("TRUMP");
    randomChump("CLUMP");
    std::cout << "Test newZombie :" << std::endl;
    Zombie *z = newZombie("NEWZ");
    z->announce();
    delete z;
    Zombie *s = newZombie("BEWZ");
    s->announce();
    delete s;
}
