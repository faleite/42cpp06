/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:42:59 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/22 22:21:12 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a class ScalarConverter that will contain only one static method "convert"
that will takes as parameter a string representation of a C++ literal in its most 
common form and output its value in the following serie of scalar types:
- char
- int
- float
- double

As this class doesn’t need to store anything at all, 
this class must not be instanciable by users.
--
Como esta classe não precisa armazenar nada, 
ela não deve ser instanciável pelos usuários.

Except for char parameters, only the decimal notation will be used.
Examples of char literals: ’c’, ’a’, ...

To make things simple, please note that non displayable characters shouldn’t 
be used as inputs. If a conversion to char is not displayable, 
prints an informative message.
--
Para simplificar, observe que caracteres não exibíveis não devem ser usados ​
​como entradas. Se uma conversão para char não for exibível, 
imprime uma mensagem informativa.

Examples of int literals: 0, -42, 42...
Examples of float literals: 0.0f, -4.2f, 4.2f...
You have to handle these pseudo literals as well (you know, for science): -inff, +inff
...
...

You have to first detect the type of the literal passed as parameter, 
convert it from string to its actual type, then convert it explicitly 
to the three other data types. Lastly, display the results as shown below.
--
Primeiro, você precisa detectar o tipo do literal passado como parâmetro, 
convertê-lo de string para seu tipo real e, em seguida, convertê-lo explicitamente 
para os outros três tipos de dados. Por fim, exiba os resultados conforme mostrado abaixo.

If a conversion does not make any sense or overflows, display a message to inform 
the user that the type conversion is impossible. Include any header you need in 
order to handle numeric limits and special values.
--
Se uma conversão não fizer sentido ou estourar, exiba uma mensagem para informar 
ao usuário que a conversão de tipo é impossível. Inclua qualquer cabeçalho 
necessário para lidar com limites numéricos e valores especiais.
*/

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

enum
{
	CHAR = 2,
	INT,
	FLOAT,
	DOUBLE,
	INFINITY_FLOAT,
	INFINITY_DOUBLE,
	QUIET_NAN,
};

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copyObj);
		ScalarConverter &operator=(const ScalarConverter &assignCopy);
		~ScalarConverter();
	public:
		static void convert(std::string &output);
};

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

// void ScalarConverter::convert(std::string &output)
// {
// 	return ;
// }

// tools





#endif // SCALARCONVERTER_HPP