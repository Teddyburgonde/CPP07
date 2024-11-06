/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:14:56 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/06 16:26:11 by tebandam         ###   ########.fr       */
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

// ici ce n'est pas correct 
Array& Array::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		if (_array != NULL)
		{
			this = array_rhs;
			this->_array = rhs.array;
		}
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