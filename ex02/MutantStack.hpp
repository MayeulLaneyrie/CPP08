/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaneyri <mlaneyri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:29:55 by mlaneyri          #+#    #+#             */
/*   Updated: 2022/07/06 19:19:45 by mlaneyri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

/*
**	'c' is the underlying container of std::stack
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

		typedef
			typename std::stack<T>::container_type::iterator
			iterator;
		typedef
			typename std::stack<T>::container_type::const_iterator
			const_iterator;
		typedef
			typename std::stack<T>::container_type::reverse_iterator
			reverse_iterator;
		typedef
			typename std::stack<T>::container_type::const_reverse_iterator
			const_reverse_iterator;
		
		MutantStack( void ) : std::stack<T>() {}
		MutantStack(MutantStack const & src) : std::stack<T>(src) {}
		~MutantStack( void ) {}

		MutantStack<T>&	operator=(MutantStack const & rhs) {
			std::stack<T>::operator=(rhs);
			return (*this);
		}

		iterator				begin( void ) { return this->c.begin(); }
		const_iterator			begin( void ) const { return this->c.begin(); }
		
		iterator				end( void ) { return this->c.end(); }
		const_iterator			end( void ) const { return this->c.end(); }

		reverse_iterator		rbegin( void ) { return this->c.begin(); }
		const_reverse_iterator	rbegin( void ) const { return this->c.begin(); }

		reverse_iterator		rend( void ) { return this->c.end(); }
		const_reverse_iterator	rend( void ) const { return this->c.end(); }
};

#endif

