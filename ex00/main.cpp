/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaneyri <mlaneyri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:16:34 by mlaneyri          #+#    #+#             */
/*   Updated: 2022/07/06 18:38:42 by mlaneyri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include "./easyfind.hpp"

int	main( void )
{
	std::vector<int>			vect(42);
	std::vector<int>::iterator	it;

	for (int i = 0; i < 42; i++)
		vect[i] = i;

	it = easyfind(vect, 42);

	if (it != vect.end())
		std::cout << "Found!" << std::endl;
	else
		std::cout << "Not found." << std::endl;
	return (0);
}
