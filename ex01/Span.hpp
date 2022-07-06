/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaneyri <mlaneyri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:29:55 by mlaneyri          #+#    #+#             */
/*   Updated: 2022/07/06 15:55:54 by mlaneyri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <cstdlib>
# include <vector>

class Span
{

	private :

		std::vector<int>	_data;
		unsigned int		_size;

	public :

		class SpanOverflowException : public std::exception
		{
			public :
				virtual const char*	what( void) const throw()
				{
					return ("You've reached maximal capacity of Span object");
				}
		};

		class NotEnoughValuesException : public std::exception
		{
			public :
				virtual const char*	what( void) const throw()
				{
					return ("There isn't enough values to compute a span");
				}
		};

		Span( void );
		Span(unsigned int n);
		Span(Span const & src);
		~Span( void );

		Span&	operator=(Span const & rhs);

		unsigned int				size( void ) const;
		std::vector<int> const &	getData( void  ) const;

		unsigned int	shortestSpan( void ) const;
		unsigned int	longestSpan( void ) const;

		void	addNumber(int const n);

		template<typename T>
		void	addRange(T begin, T end);
};

template<typename T>
void	Span::addRange(T begin, T end)
{
	std::vector<int>	tmp(begin, end);
	if (tmp.size() +  this->_data.size() > this->_size)
		throw SpanOverflowException();
	this->_data.insert(this->_data.end(), tmp.begin(), tmp.end());
}

#endif

