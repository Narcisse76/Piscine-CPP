/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 22:21:58 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 21:08:03 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->size())
		throw std::out_of_range("Array index out of bounds");
	return this->_array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= this->size())
		throw std::out_of_range("Array index out of bounds");
	return this->_array[index];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other) 
	{
		delete[] _array;
		_size = other._size;
		if (_size > 0) 
		{
			_array = new T[_size];
			for (size_t i = 0; i < _size; ++i)
				_array[i] = other._array[i];
		} 
		else 
		{
			_array = NULL;
		}
	}
	return *this;
}

template <typename T>
unsigned int Array<T>::size() const 
{
	return _size;
}

template <typename T>
Array<T>::Array(const Array<T>& other) : _array(NULL), _size(0)
{
	if (other._size > 0)
    {
		_array = new T[other._size];
		for (size_t i = 0; i < other._size; ++i)
			_array[i] = other._array[i];
		_size = other._size;
	}
}

template <typename T>
Array<T>::~Array() 
{
	delete[] _array;
}