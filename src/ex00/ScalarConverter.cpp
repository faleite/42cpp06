/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:42:59 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/24 21:43:38 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copyObj)
{
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	if (this != &copyObj)
		*this = copyObj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &assignCopy)
{
	std::cout << "ScalarConverter Copy Assignment operator called" << std::endl;
	(void)assignCopy;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}
void ScalarConverter::convert(std::string input)
{	
	int theType = getType(input);
	
	if (input.empty())
		theType = FAILED;
	
	switch (theType)
	{
		case CHAR:
			return (printCharConvertions(input));
		case NUMBER:
			return (printNumberConvertions(input));
		default:
			return (printPseudoConvertions(input));
	}
	return ;
}
