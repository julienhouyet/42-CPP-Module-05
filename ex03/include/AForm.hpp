/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:37:21 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 10:53:43 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AFORM_H__
#define __AFORM_H__

#include "Bureaucrat.hpp"

#include <iostream>
#include <string>

// ************************************************************************** //
//                                 AForm Class                                //
// ************************************************************************** //

class Bureaucrat;

class AForm
{
	public:
		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Grade is too high!";
			}
		};

		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Grade is too low!";
			}
		};

		class FormUnsignedException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Form is not signed!";
			}
		};
	
		AForm( void );
		AForm( std::string name, int gradeToSign, int gradeToExecute );
		AForm( const AForm& copy );
		AForm& operator=( const AForm& copy );
		virtual ~AForm( void );

		std::string 	getName() const;
		bool			getIsSigned() const;
		int				getGradeToSign() const;
		int 			getGradeToExecute() const;

		void			beSigned(Bureaucrat& bureaucrat);

		virtual void 	execute(Bureaucrat const & executor) const = 0;

		friend std::ostream& operator<<(std::ostream& out, const AForm& form);

	private:
		const std::string 	_name;
		bool 				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

#endif