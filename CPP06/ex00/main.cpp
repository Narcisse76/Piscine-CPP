/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:45:44 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 15:13:57 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./convert <literal>" << std::endl;
        return 1;
    }
    std::string input(av[1]);
    if (input.empty())
    {
        std::cout << "Error: empty input" << std::endl;
        return 1;
    }
    ScalarConverter::convert(input);
    return 0;
}