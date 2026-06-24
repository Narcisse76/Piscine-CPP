/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:17:09 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 21:08:00 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <string>

template <typename T>
class Array 
{
    private:
	    T* _array;
	    size_t _size;
    public:
	    Array() : _array(NULL), _size(0) {}
	    Array(unsigned int n): _array(new T[n]()), _size(n) {}
	    Array(const Array& other);
	    ~Array();
	    Array& operator=(const Array& other);
        unsigned int size() const;
	    T& operator[](unsigned int index);
	    const T& operator[](unsigned int index) const;
};

#include "Array.tpp"

#endif