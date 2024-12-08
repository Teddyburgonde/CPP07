/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:16:23 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/08 11:40:47 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
	
}
template <typename T>
Array<T>::Array(size_t n) : _size(n)
{
	if (n > 0)
		_array = new T[n];
	else
		_array = NULL;
}

template <typename T>
Array<T>::Array(Array const &cpy) : _array(NULL), _size(0)
{
	this->_size = cpy._size;
	if (_size > 0)
	{
		this->_array = new T[cpy._size];
		for(size_t i = 0; i < cpy._size; i++)
			this->_array[i] = cpy._array[i]; 
	}
}

template <typename T>
Array<T>  &Array<T>::operator=(const Array &rhs)
{
	
	if (this != &rhs)
	{
		if (_array && _size != rhs.size())
		{
			delete[] _array;
			this->_array = new T[rhs._size];
			_size = rhs._size;
		}
		for(size_t i = 0; i < rhs._size; i++)
			this->_array[i] = rhs._array[i]; 
	}
	return *this;
}

//T			&operator[](std::size_t idx); /* Subscript operator */
template <typename T>
T			&Array<T>::operator[](std::size_t idx)
{
	if (idx >= size())
	{
		throw ArrayException();
	}
	return (_array[idx]);
}

//		const T		&operator[](std::size_t idx) const; /* Subscript operator */
template <typename T>
const T			&Array<T>::operator[](std::size_t idx) const 
{
	if (idx >= size())
	{
		throw ArrayException();
	}
	return (_array[idx]);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
size_t Array<T>::size() const
{
	return (_size);
}

template <typename T>
const char* Array<T>::ArrayException::what() const throw()
{
	return "Out of bounds access";
}

template <typename T>
std::ostream	&operator<<(std::ostream &out, const Array<T> &in)
{
	out << "Array size: " << in.size() << ", Array value: ";
	for (size_t i = 0; i < in.size(); i++)
	{
		out << in[i];
		if (i < in.size() - 1)
			out << ", ";
	}
	return (out);
}