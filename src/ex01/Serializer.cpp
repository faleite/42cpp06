/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:18:26 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/25 17:48:06 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copyObj)
{
	std::cout << "Serializer Copy constructor called" << std::endl;
	if (this != &copyObj)
		*this = copyObj;
}

Serializer &Serializer::operator=(const Serializer &assignCopy)
{
	std::cout << "Serializer Copy Assignement operator called" << std::endl;
	(void)assignCopy;
	return (*this);
}

Serializer::~Serializer()
{
	std::cout << "Serializer Destructor called" << std::endl;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* 		Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
