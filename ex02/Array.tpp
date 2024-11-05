/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:14:56 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/05 12:15:00 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(){}
Array::Array(unsigned int n) : n(n){};


Array::Array(Array const &cpy)
{
	
}
Array Array::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		
	}
	return *this;
}

Array::~Array(){}

const char* Array::OperatorHighException::what() const throw()
{
	return "Operator tow low";
}