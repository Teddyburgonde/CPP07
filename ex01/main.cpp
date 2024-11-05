/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 05:47:23 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/05 09:46:09 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main()
{
	{
		int	array[] = {1, 2, 3};
		iter(array, 3, funct);
		std::cout << std::endl;
	}

	{
		std::string array;

		array = "salut";
		iter(array.c_str(), array.size(), funct);
	}
}
