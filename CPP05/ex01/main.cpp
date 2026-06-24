/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:24:09 by trambure          #+#    #+#             */
/*   Updated: 2026/06/08 22:33:25 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

int main()
{
    Bureaucrat boss("Boss", 1);
    Bureaucrat worker("Worker", 150);
    Form contract("Contract", 10, 1);
    std::cout << BLUE << "test if they can sign" << RESET << std::endl;
        worker.signForm(contract);
        boss.signForm(contract); 
}