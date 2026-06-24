/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 00:44:03 by trambure          #+#    #+#             */
/*   Updated: 2026/04/14 01:46:06 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(NULL)); // pour les nombres aléatoires

	std::cout << " Test 1: Construction et ajout simple\n";
	try {
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << "\n";
		std::cout << "Longest span : " << sp.longestSpan() << "\n";
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << "\n";
	}

	std::cout << "\n Test 2: Dépassement de capacité\n";
	try {
		Span sp(2);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3); // doit lancer une exception
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << "\n";
	}

	std::cout << "\n Test 3: Span vide ou 1 seul élément\n";
	try {
		Span sp(3);
		sp.addNumber(42);
		std::cout << sp.shortestSpan() << "\n"; // erreur attendue
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << "\n";
	}

	std::cout << "\n Test 4: Test avec 10 000 nombres aléatoires\n";
	try {
		Span sp(10000);
		for (int i = 0; i < 10000; ++i)
			sp.addNumber(std::rand());

		std::cout << "Shortest span: " << sp.shortestSpan() << "\n";
		std::cout << "Longest span : " << sp.longestSpan() << "\n";
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << "\n";
	}

	return 0;
}