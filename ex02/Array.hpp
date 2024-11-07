/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:02:21 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/07 09:00:33 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>


/* Template definition */  
template <typename T>
class Array
{
	public: /* Canonical form */
		Array();
		Array(size_t n);
		Array(Array const &cpy);
		~Array();
	
	public: /* Method */
		unsigned int size() const;

	public:	/* Operator overloading */
		Array operator=(Array const &rhs);
		T			&operator[](std::size_t idx); /* Subscript operator */
		//const T		&operator[](std::size_t idx) const; /* Subscript operator */

	private: /* Exception */
		class ArrayException : public std::exception
        {
            public:
                const char* what() const throw();
        };
	
	private: /* Attributes */
		T* _array;
		size_t	_size;
};

template <typename T>
std::ostream &operator <<(std::ostream &out, Array<T> &in);

#include "Array.tpp"

#endif 