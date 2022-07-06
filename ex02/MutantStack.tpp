/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaneyri <mlaneyri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:16:34 by mlaneyri          #+#    #+#             */
/*   Updated: 2022/06/30 14:40:23 by mlaneyri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

/*
** ==== Constructors & destructors =============================================
*/

template<typename T>
MutantStack<T>::MutantStack( void )
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & src) : std::stack<T>(src)
{
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack( void )
{
	return ;
}

/*
** ==== Operator overloads =====================================================
*/

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack<T> const & rhs)
{
	(void)rhs;
	return (*this);
}

/*
** ==== Accessors ==============================================================
*/

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void )
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void )
{
	return (this->c.end());
}
