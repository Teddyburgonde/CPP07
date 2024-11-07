/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:02:17 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/07 18:50:43 by teddybandam      ###   ########.fr       */
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
	
	/* Test for Arrayexception  */
	{
		try
		{
			Array<int>array(10);

			array[-1];
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	/* Copy test for array */
	//?????????
	// 1. creation de d'un tableau de int 
	// 2. creation d'un tableau de int alouer avec new;
	// 3. initialiser rand a NULL
	// 4. faire une boucle pour copier les valeurs a l'interieur des deux tableaux
	{
		try
		{
			Array<int>array(10);

			array[-1];
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	
	// std::cout << array.size() << std::endl;
}