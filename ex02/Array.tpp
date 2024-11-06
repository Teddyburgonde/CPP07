/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:16:23 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/06 20:17:52 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array() : _array(NULL), _size(0)
{
	
}
Array::Array(size_t n) : _size(n)
{
	if (n > 0)
		_array = new T[n];
	else
		_array = NULL;
}

Array::Array(Array const &cpy) : _array(NULL), _size(0)
{
	this->_size = cpy._size;
	if (_size > 0)
	{
		this->_array = new T[cpy._size];
		for(size_t i = 0; i < cpy._size; i++)
			this->_array[i] = cpy._array[i]; 
	}
}

Array& Array::operator=(Array const &rhs)
{
	
	if (this != &rhs)
	{
		if (_array)
			delete[] _array;
		_size = rhs._size;
		this->_array = new T[rhs._size];
		for(size_t i = 0; i < rhs._size; i++)
			this->_array[i] = rhs._array[i]; 
	}
	return *this;
}

Array::~Array()
{
	delete[] _array;
}

size_t Array::size() const
{
	return (_size);
}

const char* Array::OperatorHighException::what() const throw()
{
	return "Operator too low";
}
