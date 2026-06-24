/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:24:48 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 15:31:01 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

Base* generate()
{
	int random = rand() % 3;
	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "p: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "p: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "p: C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "p: A" << std::endl;
		(void)a;
		return ;
	} catch (...) {}

	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "p: B" << std::endl;
		(void)b;
		return ;
	} catch (...) {}

	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "p: C" << std::endl;
		(void)c;
		return ;
	} catch (...) {
	}
	std::cout << "Uknow type" << std::endl;
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	Base* basePtr = generate();
	std::cout << "Using pointer:" << std::endl;
	identify(basePtr);
	delete basePtr;

	Base& baseRef = *generate();
	std::cout << "Using reference:" << std::endl;
	identify(baseRef);
	delete &baseRef;

	return 0;
}