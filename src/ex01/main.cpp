/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:07:47 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/27 18:05:11 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*
This exercise is about using the reinterpret_cast.

Retyping of raw data
Does the program work as required?
Did the student create a class with a private constructor, and static
methods ?
The reinterpret_cast<> should be used twice:
- First from data* to uintptr_t.
- Then, from uintptr_t to data*.
And the resulting data struct should be usable.
*/
int	main(void)
{
	Data myData;
	myData.str1 = "Hello";
	myData.str2 = "School!";
	myData.nbr = 42;
	
	uintptr_t intPtr = Serializer::serialize(&myData);
	Data *dataPtr = Serializer::deserialize(intPtr);

	std::cout << "myData Address:		" << &myData << std::endl;
	std::cout << "Serialized intPtr:	" << intPtr << std::endl;
	std::cout << "Deserialized dataPtr:	" << dataPtr << std::endl;
	
	std::string *ptrStr = reinterpret_cast<std::string *>(dataPtr);
	
	std::cout << "\n ------->  "
	<< *ptrStr; 
	ptrStr++;
	std::cout << " " << dataPtr->nbr << " "
	<< *ptrStr 
	<<"  <------- " << std::endl;
	
	return (0);
}
