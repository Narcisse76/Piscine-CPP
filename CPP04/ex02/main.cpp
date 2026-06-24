/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 10:13:43 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:21:49 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal* animals[2]; //replace 2 by 3 if you wan't to test the abstract class this will not compile
    animals[0] = new Dog();
    animals[1] = new Cat();
    //animals[2] = new Animal(); //take of the commentary if you wan't to test the abstract class this will not compile
    for (int i = 0; i < 2; i++) //replace 2 by 3 if you wan't to test the abstract class this will not compile
        animals[i]->makeSound();
    delete animals[0];
    delete animals[1];
    return (0);
}   