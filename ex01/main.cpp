/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaneyri <mlaneyri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:16:34 by mlaneyri          #+#    #+#             */
/*   Updated: 2022/07/06 15:56:07 by mlaneyri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "./Span.hpp"

int main( void )
{
	{
		Span sp = Span(5);


		sp.addNumber(6);

		try
		{
			sp.shortestSpan();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try
		{
			sp.addNumber(177013);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl << "==== Tests perso:" << std::endl << std::endl;

		Span sp = Span(5);

		int	truc[5] = {42, 69, -12, 32, 0};

		sp.addRange(truc, truc + 5);

		try
		{
			sp.addRange(truc, truc + 2);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	
		try
		{
			sp.addNumber(11);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	return (0);
}
