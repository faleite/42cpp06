/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:49:08 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/22 22:56:47 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>
#include <string>
#include <cctype>

/*
This exercise is about using the static_cast.

- Scalar conversion
- Did the student create a class with a private constructor, and static methods ?
- Did the student use the static_cast to convert values?
- Accept the use of implicit casts for promotion casts only.
- Does the program work as required?
- Anyway, please don't be too uncompromising towards the exercise's outputs if 
  the spirit of the exercise is respected.
- Even if this exercise is wrong, continue the evaluation process.
*/

int	isSpecialNotPrint(const char &c)
{
	return (c == '\n' || c == '\t' 
			|| c == '\v' || c == '\b');
}

int	isOneChar(const std::string &output)
{
	if (output.size() == 1 && (std::isprint(output[0]) 
		|| isSpecialNotPrint(output[0])))
		return (CHAR);
	return (1);
}
// CONTINUE...
int	isNumber(const std::string &output)
{
	return (1);
}

int	isPseudoLiterals(const std::string &output)
{
	if (output == "-inff" || output == "+inff")
		return (INFINITY_FLOAT);
	if (output == "-inf" || output == "+inf")
		return (INFINITY_DOUBLE);
	if (output == "nan" || output == "nanf")
		return (QUIET_NAN);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error:\nInvalid number of arguments" << std::endl;
		return (1);
	}
	std::cout << isOneChar(argv[1]) << std::endl;
	return (0);
}

// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	(void)argv;

// 	std::cout << "FLOAT:\n";
// 	std::cout << std::numeric_limits<float>::infinity() << std::endl;
//     std::cout << -std::numeric_limits<float>::infinity() << std::endl;
//     std::cout << std::numeric_limits<float>::quiet_NaN() << std::endl;

// 	std::cout << "\nDOUBLE:\n";
// 	std::cout << std::numeric_limits<double>::infinity() << std::endl;
//     std::cout << -std::numeric_limits<double>::infinity() << std::endl;
//     std::cout << std::numeric_limits<double>::quiet_NaN() << std::endl;

// 	float large_negative_value = -std::numeric_limits<float>::max() * 2.0f;
    
//     std::cout << "\nLarge negative value: " << large_negative_value << std::endl;
// 	return (0);
// }