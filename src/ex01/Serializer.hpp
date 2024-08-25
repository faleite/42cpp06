/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:18:26 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/25 18:45:48 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

/*
Implemente uma classe Serializer, que não será inicializável pelo usuário de 
forma alguma, com os seguintes métodos estáticos:

uintptr_t serialize(Data* ptr);
Ele pega um ponteiro e o converte para o tipo inteiro sem sinal uintptr_t.

Data* deserialize(uintptr_t raw);
Ele pega um parâmetro inteiro sem sinal e o converte para um ponteiro para Data.

Escreva um programa para testar se sua classe funciona conforme o esperado.

Você deve criar uma estrutura Data não vazia (significa que ela tem membros de dados).

Use serialize() no endereço do objeto Data e passe seu valor de retorno para 
deserialize(). Então, certifique-se de que o valor de retorno de deserialize() 
seja igual ao ponteiro original.

Não se esqueça de entregar os arquivos da sua estrutura Data.
*/

typedef struct s_data
{ 
	std::string	str1;
	std::string str2;
	int			nbr;
}				Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &copyObj);
		Serializer &operator=(const Serializer &assignCopy);
		~Serializer();
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t raw);
};

#endif // SERIALIZER_HPP