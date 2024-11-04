/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:27:51 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/04 23:02:48 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void  swap(T& a, T& b) 
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> 
T	min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	else
		return (b);	
}
template <typename T> 
T	max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	else
		return (b);	
}

template <typename T>
class Whatever
{
    private:
        T content;
    public:
        Whatever(const T& item) : content(item) {}
        T getItem() const 
			{return content;}
};


#endif 
