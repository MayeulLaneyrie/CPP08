/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaneyri <mlaneyri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:29:55 by mlaneyri          #+#    #+#             */
/*   Updated: 2022/07/06 16:59:42 by mlaneyri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

/*
**	c is the underlying container of std::stack
**	it is by default an std::deque container, but it can also be std::vector
**	or std::list. All of them have iterator.
**
**	We 'just' have to access the underlying container's iterators, to give our
**	mutant stack the iterators it needs, and voila!
*/

template<typename T>
class MutantStack : public std::stack<T>
{

	private :

	public :

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		MutantStack( void );
		MutantStack(MutantStack const & src);
		~MutantStack( void );

		MutantStack<T>&	operator=(MutantStack const & rhs);

		iterator	begin( void );
		iterator	end( void );
};

# include "./MutantStack.tpp"

#endif

