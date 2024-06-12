/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:54:16 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 16:53:37 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PRESIDENTIAL_PARDON_FORM_H__
#define __PRESIDENTIAL_PARDON_FORM_H__

#include "AForm.hpp"

#include <iostream>
#include <string>

// ************************************************************************** //
//                       PresidentialPardonForm Class                         //
// ************************************************************************** //

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const std::string target );
		PresidentialPardonForm( const PresidentialPardonForm& copy );
		PresidentialPardonForm& operator=( const PresidentialPardonForm& copy );
		~PresidentialPardonForm( void );

		void execute(Bureaucrat const & executor) const;

	private:
		const std::string _target;
};

#endif