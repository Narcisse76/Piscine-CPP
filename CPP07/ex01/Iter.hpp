/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:17:02 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 21:07:50 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename F>
void	iter(T* array, size_t length, F func)
{
	for (size_t i = 0; i < length ; ++i)
		func(array[i]);
}

#endif