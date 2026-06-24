/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:36:03 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:03:12 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "The memory address of the string variable :" << &brain << std::endl;
    std::cout << "The memory address held by stringPTR :" << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF :" << &stringREF << "\n" << std::endl;
    std::cout << "The value of the string variable :" << brain << std::endl;
    std::cout << "The value pointed to by stringPTR :" << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF :" << stringREF << std::endl;
}
