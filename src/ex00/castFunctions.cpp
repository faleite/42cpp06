/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   castFunctions.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 21:24:28 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/24 21:34:01 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	castToChar(long long int value)
{
	if (value > CHAR_MAX || value < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (value < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

void	castToInt(long long int value)
{
	if (value > INT_MAX || value < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void	castToFloat(float value)
{
	if (value > FLT_MAX || value < -FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else
	{
		std::cout	<< "float: " << std::fixed << std::setprecision(1) 
					<< static_cast<float>(value) << 'f' << std::endl;
	}
}

void	castToDouble(double value)
{
	if (value > DBL_MAX || value < -DBL_MAX)
		std::cout << "double: impossible" << std::endl;
	else
	{
		std::cout	<< "double: " << std::fixed << std::setprecision(1) 
					<< static_cast<double>(value) << std::endl;
	}
}
