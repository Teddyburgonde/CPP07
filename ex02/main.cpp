/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:02:17 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/07 11:25:44 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	/* Test for acces and change value of array of int */
	{
		try
		{
			Array<int>array(10);

			array[0] = 5;
			array[1] = 8;
			std::cout << array[0] << std::endl;
			std::cout << array[1] << std::endl;		
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	/* Test for Arrayexception  */
	{
		try
		{
			Array<int>array(10);

			array[11];
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	
	
	// std::cout << array.size() << std::endl;
}