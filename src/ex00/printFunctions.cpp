/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printFunctions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 21:29:01 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/24 21:29:31 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	printCharConvertions(const std::string &input)
{
	char c = input[0];
	std::cout << "char: '" << c << "'" << std::endl
	<< "int: " << static_cast<int>(c) << std::endl
	<< "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << 'f' << std::endl
	<< "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void	printNumberConvertions(const std::string &input)
{
	long long int intValue = std::strtoll(input.c_str(), NULL, 10);
	float floatValue = (std::strtof(input.c_str(), NULL));	
	double doubleValue = (std::strtod(input.c_str(), NULL));	
	
	castToChar(intValue);
	castToInt(intValue);
	castToFloat(floatValue);
	castToDouble(doubleValue);
}

void	printPseudoConvertions(const std::string &input)
{
	int getType = isPseudoLiterals(input);
	
	std::cout << "char: impossible" << std::endl
	<< "int: impossible" << std::endl;
	
	if (getType == INFINITY_FLOAT)
	{
		std::cout << "float: " << input << std::endl
		<< "double: " << input.substr(0, (input.size() -1)) << std::endl;
	}
	else if (getType == INFINITY_DOUBLE)
	{
		std::cout << "float: " << input << "f" << std::endl
		<< "double: " << input << std::endl;
	}
	else
	{
		std::cout << "float: impossible" << std::endl
		<< "double: impossible" << std::endl;
	}
}
