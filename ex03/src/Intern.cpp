/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:13:15 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 18:11:09 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// ************************************************************************** //
//                            Bureaucrat Class                                //
// ************************************************************************** //

Intern::Intern( void )
{
	
}

Intern::Intern( const Intern& copy )
{
	(void)copy;
	*this = copy;
}

Intern& Intern::operator=( const Intern& copy )
{
	(void)copy;
	return *this;
}

Intern::~Intern( void )
{
	
}