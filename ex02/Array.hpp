/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:02:21 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/05 11:43:10 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &cpy);
		Array operator=(Array const &rhs);
		~Array();
	
	public:
		int	size();

	private:
		class OperatorHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};









#endif 