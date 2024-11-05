/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:14:56 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/05 14:00:28 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array() : _array(NULL), _size(0)
{
	
}
Array::Array(unsigned int n) : _size(n)
{
	if (n > 0)
		_array = new T[n];
	else
		_array = NULL;
}

Array::Array(Array const &cpy) _array(NULL), _size(0)
{
	_array = new T[n] = cpy._size;
	_array[n] = cpy._size;
}

Array Array::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		this = array_rhs;
	}
	return *this;
}

Array::~Array()
{
	delete[] _array;
}

unsigned int size::size() const
{
	return (_size);
}


const char* Array::OperatorHighException::what() const throw()
{
	return "Operator tow low";
}