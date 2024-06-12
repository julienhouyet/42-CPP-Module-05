/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:53:38 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 13:29:20 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ************************************************************************** //
//                         ShrubberyCreationForm Class                        //
// ************************************************************************** //

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& copy ) : AForm(copy), _target(copy._target)
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& copy )
{
	if (this != &copy)
	{
		AForm::operator=(copy);
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	
}