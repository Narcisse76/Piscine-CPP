/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:49:07 by narcisse          #+#    #+#             */
/*   Updated: 2026/05/06 19:42:00 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"
#include "../includes/phonebook.hpp"

int main ()
{
    Phonebook phonebook;
    std::string cmd;
    std::string input;
    int index;
    
    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
            phonebook.addcontact();
        else if (cmd == "SEARCH")
        {
            phonebook.displaycontacts();
            std::cout << "Enter an index: ";
            std::getline(std::cin, input);
            if (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
                std::cout << "Invalid index" << std::endl;
            else
            {
            index = std::atoi(input.c_str());
            phonebook.displayonecontact(index);
            }
        }   
        else if (cmd == "EXIT")
            break;
        else
            std::cout << "Please enter a valid command." << std::endl;
    }
    return (0);
}