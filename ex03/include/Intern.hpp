/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:13:10 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 19:01:12 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __INTERN_H__
#define __INTERN_H__

#include "AForm.hpp"

// ************************************************************************** //
//                               Intern Class                                 //
// ************************************************************************** //

class Intern
{
	public:
		Intern( void );
		Intern( const Intern& copy );
		Intern& operator=( const Intern& copy );
		~Intern( void );

		AForm* makeForm(std::string name, std::string target) const;

	private:
        typedef AForm* (Intern::*FormCreationMethods)(const std::string target) const;
        FormCreationMethods _formCreationMethods[3];
	
		AForm*	_newShrubberyCreationForm(std::string target) const;
		AForm*	_newRobotomyRequestForm(std::string target) const;
		AForm*	_newPresidentialPardonForm(std::string target) const;
};

#endif