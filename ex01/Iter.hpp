/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 05:21:06 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/05 09:46:24 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void funct(T &value)
{
	std::cout << value;
}

template <typename T>
void iter(T* array, int size, void(*func)(T&)) 
{
    for(int i = 0; i < size; i++)
	{
		func(array[i]);
	}
}


#endif