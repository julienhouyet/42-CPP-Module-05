/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:53:32 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 16:31:13 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SHRUBBERY_CREATION_H__
#define __SHRUBBERY_CREATION_H__

#include "AForm.hpp"

#include <iostream>
#include <string>

// ************************************************************************** //
//                         ShrubberyCreationForm Class                        //
// ************************************************************************** //

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm& copy );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& copy );
		~ShrubberyCreationForm( void );

		void execute(Bureaucrat const & executor) const;

	private:
		const std::string _target;
};

#endif