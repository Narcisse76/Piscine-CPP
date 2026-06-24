/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:17:04 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 21:13:09 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

template <typename T>
void print(const T &x)
{
    std::cout << x << " ";
}

template <typename T>
void increment(T &x)
{
    x++;
}

int main()
{
    int arr[] = {1, 2, 3, 4};

    std::cout << "int array: ";
    iter(arr, 4, print<int>);
    std::cout << std::endl;

    iter(arr, 4, increment<int>);

    std::cout << "After increment: ";
    iter(arr, 4, print<int>);
    std::cout << std::endl;

    const int arr2[] = {10, 20, 30};

    std::cout << "Const int array: ";
    iter(arr2, 3, print<int>);
    std::cout << std::endl;

    char str[] = "hello";

    std::cout << "Original string: ";
    iter(str, 5, print<char>);
    std::cout << std::endl;

    double darr[] = {1.1, 2.2, 3.3};

    std::cout << "Double array: ";
    iter(darr, 3, print<double>);
    std::cout << std::endl;

    return 0;
}