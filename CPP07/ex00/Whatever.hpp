/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:17:00 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 21:07:44 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b) 
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T &a, const T &b) 
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T max(const T &a, const T &b) 
{
	if (a > b)
		return a;
	return b;
}

#endif