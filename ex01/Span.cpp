/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaneyri <mlaneyri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:16:34 by mlaneyri          #+#    #+#             */
/*   Updated: 2022/07/06 14:32:50 by mlaneyri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"

/*
** ==== Constructors & destructors =============================================
*/

Span::Span( void ) : _size(0)
{
	return ;
}

Span::Span(unsigned int n) : _size(n)
{
	return ;
}

Span::Span(Span const & src) : _data(src.getData()), _size(src.size())
{
	return ;
}

Span::~Span( void )
{
	return ;
}

/*
** ==== Operator overloads =====================================================
*/

Span &	Span::operator=(Span const & rhs)
{
	this->_data = rhs.getData();
	this->_size = rhs.size();
	return (*this);
}

/*
** ==== Accessors ==============================================================
*/

unsigned int	Span::size( void ) const
{
	return (this->_size);
}

std::vector<int> const &	Span::getData( void ) const
{
	return (this->_data);
}

/*
** ==== Member functions =======================================================
*/

void	Span::addNumber(int const n)
{
	if (this->_data.size() == this->_size)
		throw Span::SpanOverflowException();
	this->_data.push_back(n);
}

unsigned int	Span::shortestSpan( void ) const
{
	if (this->_data.size() < 2)
		throw Span::NotEnoughValuesException();

	std::vector<int>	cpy =  this->_data;
	unsigned int		ret = -1;

	std::sort(cpy.begin(), cpy.end());
	for (std::vector<int>::iterator it = cpy.begin(); it + 1 < cpy.end(); it++)
	{
		unsigned int const	tmp= ::abs(*it - *(it + 1));
		if (tmp < ret)
			ret = tmp;
	}
	return ret;
}

#include <iostream>

unsigned int	Span::longestSpan( void ) const
{
	if (this->_data.size() < 2)
		throw Span::NotEnoughValuesException();
	return (*std::max_element(this->_data.begin(), this->_data.end())
			- *std::min_element(this->_data.begin(), this->_data.end()));
}

