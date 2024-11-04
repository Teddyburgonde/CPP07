/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:19:16 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/04 22:49:22 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int	main()
{
	{
		std::string a;
		std::string b;

		a = "salut";
		b = "aurevoir";

		std::cout << "Function swap " << std::endl;
		std::cout << std::endl;
		std::cout << "Before, value of a: " << a << std::endl;
		std::cout << "Before, value of b: " << b << std::endl;
		swap(a, b);
		std::cout << std::endl;
		std::cout << "After, value of a: " << a << std::endl;
		std::cout << "After, value of b: " << b << std::endl;

		std::cout << "---------------------------------" << std::endl;
		std::cout << std::endl;
	}

	{
		int a;
		int b;
		int result;

		a = 10;
		b = 80;
		
		std::cout << "Function max : " << std::endl;
		std::cout << std::endl;
		std::cout << "Value of a: " << a << std::endl;
		std::cout << "Value of b: " << b << std::endl;
		result = max(a, b);
		std::cout << "The highest value is " << result << std::endl;

		std::cout << "---------------------------------" << std::endl;
		std::cout << std::endl;
	}

	{
		int a;
		int b;
		int result;

		a = 10;
		b = 50;
		
		std::cout << "Function min : " << std::endl;
		std::cout << std::endl;
		std::cout << "Value of a: " << a << std::endl;
		std::cout << "Value of b: " << b << std::endl;
		result = min(a, b);
		std::cout << "The smallest value is  " << result << std::endl;
		std::cout << "---------------------------------" << std::endl;
		std::cout << std::endl;
	}
}