/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:12:23 by faaraujo          #+#    #+#             */
/*   Updated: 2024/08/26 21:53:11 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/*
Exercise 02: Identify real type
This exercise is about using the dynamic_cast.

Real type identification
Does the program work as required?
Check the code. Did the student use the dynamic_cast to identify the real type?
void identify(Base* p) should check if the cast return is NULL.
void identify(Base& p) should use a try and catch block to check if the cast failed.
(In case you're wondering, the header <typeinfo> must not appear anywhere.)
*/

/*
It randomly instanciates A, B or C and returns the instance as a Base pointer.
Feel free to use anything you like for the random choice implementation.
*/
Base * generate(void)
{
	int getClass = std::rand() % 3;
	
	switch (getClass)
	{
		case 0:
			std::cout << "Generating class: A" << std::endl;
			return (new A());
		case 1:
			std::cout << "Generating class: B" << std::endl;
			return (new B());
		case 2:
			std::cout << "Generating class: C" << std::endl;
			return (new C());
		default:
			std::cerr << "Cannot generate a class" << std::endl;
			return (NULL);
	}
}

/*
It prints the actual type of the object pointed to by p: "A", "B" or "C".
*/
void	identify(Base * p)
{
	if (dynamic_cast<A *>(p))
	{
		std::cout << "Pointer: A" << std::endl;	
		return ;
	}
	if (dynamic_cast<B *>(p))
	{
		std::cout << "Pointer: B" << std::endl;	
		return ;
	}
	if (dynamic_cast<C *>(p))
	{
		std::cout << "Pointer: C" << std::endl;	
		return ;
	}
	else
		std::cout << "Invalid Pointer" << std::endl;	
}

/*
It prints the actual type of the object pointed to by p: "A", "B" or "C". 
Using a pointer inside this function is forbidden.
*/
void	identify(Base &p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "Reference: A" << std::endl;
	}
	catch(const std::exception& e) 
	{
		std::cerr << e.what() << " for A" << std::endl;
	}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "Reference: B" << std::endl;
	}
	catch(const std::exception& e) 
	{
		std::cerr << e.what() << " for B" << std::endl;
	}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "Reference: C" << std::endl;
	}
	catch(const std::exception& e) 
	{
		std::cerr << e.what() << " for C" << std::endl;
	}
}

int	main(void)
{	
	std::srand(std::time(NULL));
	Base *ptr = generate();
	Base &ref = *ptr;
	
	identify(ptr);
	identify(ref);
	delete (ptr);
	
	return (0);
}
