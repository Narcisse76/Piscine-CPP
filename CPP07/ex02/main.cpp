/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:17:10 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 21:16:43 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Array.hpp"

int main()
{
    std::cout << "Test 1: Construction sans paramètre\n";
    Array<int> emptyArray;
    std::cout << "Size: " << emptyArray.size() << "\n\n";

    std::cout << "Test 2: Construction avec taille \n";
    Array<int> intArray(5);
    std::cout << "Size: " << intArray.size() << "\n";
    for (size_t i = 0; i < intArray.size(); ++i)
        std::cout << "intArray[" << i << "] = " << intArray[i] << "\n";
    std::cout << "\n";

    std::cout << "Test 3: Affectation de valeurs dans l'array\n";
    for (size_t i = 0; i < intArray.size(); ++i)
        intArray[i] = i * 10;
    for (size_t i = 0; i < intArray.size(); ++i)
        std::cout << "intArray[" << i << "] = " << intArray[i] << "\n";
    std::cout << "\n";

    std::cout << "Test 4: Construction par copie\n";
    Array<int> copyArray(intArray);
    copyArray[0] = 999;
    std::cout << "copyArray[0] = " << copyArray[0] << "\n";
    std::cout << "intArray[0]  = " << intArray[0] << " (should not be affected)\n\n";

    std::cout << "Test 5: Opérateur d'affectation\n";
    Array<int> assignedArray;
    assignedArray = intArray;
    assignedArray[1] = 888;
    std::cout << "assignedArray[1] = " << assignedArray[1] << "\n";
    std::cout << "intArray[1]      = " << intArray[1] << " (should not be affected)\n\n";

    std::cout << "Test 6: Accès hors limites (exception)\n";
    try
    {
        intArray[42] = 0;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << "\n\n";
    }

    std::cout << "Test 7: Classe avec std::string\n";
    Array<std::string> strArray(2);
    strArray[0] = "Hello";
    strArray[1] = "World";
    for (size_t i = 0; i < strArray.size(); ++i)
        std::cout << "strArray[" << i << "] = " << strArray[i] << "\n";

    return 0;
}

// Main Subject
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }