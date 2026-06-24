/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:23:51 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 13:37:24 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    std::cout << " === TEST DE CLAPTRAP === " << std::endl;
    ClapTrap clap("Clappy");

    std::cout << "ClapTrap attaque Bob !" << std::endl;
    clap.attack("Bob");

    std::cout << "ClapTrap subit 5 points de dégâts" << std::endl;
    clap.takeDamage(5);

    std::cout << "ClapTrap se répare de 3 points" << std::endl;
    clap.beRepaired(3);

    std::cout << " === TEST DE SCAVTRAP === " << std::endl;
    ScavTrap scav("Scavy");

    std::cout << "ScavTrap attaque Alice !" << std::endl;
    scav.attack("Alice");

    std::cout << "ScavTrap subit 20 points de dégâts" << std::endl;
    scav.takeDamage(20);

    std::cout << "ScavTrap se répare de 10 points" << std::endl;
    scav.beRepaired(10);

    std::cout << "ScavTrap active le mode Gate Keeper" << std::endl;
    scav.guardGate();

    std::cout << " === TEST DE FRAGTRAP === " << std::endl;
    FragTrap frag("Fraggy");

    std::cout << "FragTrap attaque Eve !" << std::endl;
    frag.attack("Eve");

    std::cout << "FragTrap subit 30 points de dégâts" << std::endl;
    frag.takeDamage(30);

    std::cout << "FragTrap se répare de 20 points" << std::endl;
    frag.beRepaired(20);

    std::cout << "FragTrap demande un high five !" << std::endl;
    frag.highFivesGuys();

    std::cout << " === TEST DE POLYMORPHISME === " << std::endl;
    ClapTrap* poly1 = new ScavTrap("PolyScav");
    ClapTrap* poly2 = new FragTrap("PolyFrag");

    std::cout << "PolyScav attaque PolyFrag" << std::endl;
    poly1->attack("PolyFrag");

    std::cout << "PolyFrag attaque PolyScav" << std::endl;
    poly2->attack("PolyScav");

    delete poly1;
    delete poly2;

    std::cout << " === FIN DES TESTS === " << std::endl;
    return 0;
}