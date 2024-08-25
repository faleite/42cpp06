/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkInput.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 21:21:37 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/25 15:01:08 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	isSpecialNotPrint(const char &c)
{
	return (c == '\n' || c == '\t' 
			|| c == '\v' || c == '\b');
}

int	isOneChar(const std::string &input)
{
	if (input.size() == 1 && !std::isdigit(input[0]) &&
	(std::isprint(input[0]) || isSpecialNotPrint(input[0])))
		return (CHAR);
	return (FAILED);
}
int	isNumber(const std::string &input)
{
	size_t i = 0;
	
	if (input[i] == '-' || input[i] == '+')
		i++;
	// Check int
	while (i < input.size() && std::isdigit(input[i]))
		i++;
	if (i == input.size())
		return (NUMBER);
	// check float and double
	if (input[i++] == '.')
	{
		while (i < input.size() && std::isdigit(input[i]))
			i++;
		if (i == input.size())
			return (NUMBER);
		if (i == input.size() - 1 && input[i] == 'f')
			return (NUMBER);
	}
	return (FAILED);
}

int	isPseudoLiterals(const std::string &input)
{
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return (INFINITY_FLOAT);
	if (input == "-inf" || input == "+inf" || input == "nan")
		return (INFINITY_DOUBLE);
	return (FAILED);
}
int	getType(const std::string &input)
{
	int	theType;

	theType = isOneChar(input);
	if (theType == 1)
		theType = isNumber(input);
	if (theType == 1)
		theType = isPseudoLiterals(input);
	return (theType);
}
