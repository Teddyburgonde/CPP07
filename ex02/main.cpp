/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:02:17 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/08 10:24:37 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	/* Test for acces and change value of array of int */
	{
		Array<int>array(10);
		try
		{
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
		Array<int>array(10);
		try
		{

			array[11];
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	/* Test for Arrayexception  */
	{
		Array<int>array(10);
		try
		{
			array[-1];
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	/* Copy test for array */
	{
		Array<int>array(100);
		int *check_array = new int[100];
		int stock_number_rand;

		stock_number_rand = 0;
		srand(0);
		try
		{
			for (int i = 0; i < 100; i++) 
			{
        		stock_number_rand = rand();
				array[i] = stock_number_rand;
				check_array[i] = stock_number_rand;
				std::cout << array[i] << std::endl;
				std::cout << check_array[i] << std::endl;
			}
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		/* test operator overloading for = */
		{
			Array<int> tmp = array;

			std::cout << tmp << std::endl;
		}
		
	}
	// Array &operator=(Array const &rhs);





	
	// // SCOPE JE SUIS ICI 
	// {
    // Array<int> tmp = numbers; // Utilisation de l'opérateur d'affectation pour créer `tmp` à partir de `numbers`
    // Array<int> test(tmp); // Utilisation du constructeur de copie pour créer `test` en copiant `tmp`
	// }










































	
	// std::cout << array.size() << std::endl;
}