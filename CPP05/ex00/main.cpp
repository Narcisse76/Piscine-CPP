/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:21:19 by trambure          #+#    #+#             */
/*   Updated: 2026/06/08 20:58:08 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

int main()
{
    Bureaucrat bob("Bob", 42);
    
    std::cout << BLUE << "First test valid" << RESET << std::endl;
    std::cout << GREEN << bob << RESET <<std::endl;
    
    Bureaucrat boss("Boss", 1);
    Bureaucrat worker("Worker", 150);
    
    std::cout << BLUE << "Second Test Create two invalid Bureaucrat" << RESET << std::endl;
    try {
        Bureaucrat god("God", 0);
    }
    catch (std::exception& e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    try {
        Bureaucrat evil("Evil", 151);
    }
    catch (std::exception& e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    
    std::cout << BLUE <<  "Third test increment/decrement until exception catch" << RESET << std::endl;
    try {
        boss.incrementGrade();
    }
    catch (std::exception& e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    try {
        worker.decrementGrade();
    }
    catch (std::exception& e) {
        std::cout << RED << e.what() << RESET << std::endl;
    } 
}