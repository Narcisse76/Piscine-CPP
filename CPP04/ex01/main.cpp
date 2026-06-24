/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 10:13:43 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:08:57 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const int N = 4; //doit obligatoirement etre paire
    Animal* animals[N];

    std::cout << "\n--- Création des animaux ---\n";
    for (int i = 0; i < N/2; ++i) {
        animals[i] = new Dog();
        std::cout << "Created Dog at index " << i << std::endl;
    }
    for (int i = N/2; i < N; ++i) {
        animals[i] = new Cat();
        std::cout << "Created Cat at index " << i << std::endl;
    }

    std::cout << "\n--- Accès aux types ---\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "animals[" << i << "] is a " << animals[i]->getType() << std::endl;
    }

    std::cout << "\n--- Suppression des animaux ---\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "Deleting animal at index " << i << std::endl;
        delete animals[i];
    }

    std::cout << "\nFin du programme. Vérifiez que tous les destructeurs ont été appelés dans l'ordre correct et sans fuite mémoire." << std::endl;
    return 0;
}