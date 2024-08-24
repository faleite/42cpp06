/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:49:08 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/24 21:55:07 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*
void	getLimits(void)
{

	std::cout << "\nFLOAT:\n";
	std::cout << std::numeric_limits<float>::infinity() << std::endl;
    std::cout << -std::numeric_limits<float>::infinity() << std::endl;
    std::cout << std::numeric_limits<float>::quiet_NaN() << std::endl;

	std::cout << "\nDOUBLE:\n";
	std::cout << std::numeric_limits<double>::infinity() << std::endl;
    std::cout << -std::numeric_limits<double>::infinity() << std::endl;
    std::cout << std::numeric_limits<double>::quiet_NaN() << std::endl;

	float large_negative_value = -std::numeric_limits<float>::max() * 2.0f;
    
    std::cout << "\nLarge negative value: " << large_negative_value << std::endl;
}
*/

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
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error:\nInvalid number of arguments" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	// getLimits();
	return (0);
}
