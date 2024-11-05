/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 05:21:06 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/05 05:47:00 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void funct(T &)
{
	std::cout << T << std::endl;
}


template <typename T>
void iter(T* array, int size, void(*func)(T&)) 
{
    for(int i = 0; i < size; i++)
	{
		func(array[i]);
	}
}