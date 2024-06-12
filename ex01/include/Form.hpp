/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:37:21 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 10:12:06 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FORM_H__
#define __FORM_H__

#include "Bureaucrat.hpp"

#include <iostream>
#include <string>

// ************************************************************************** //
//                                  Form Class                                //
// ************************************************************************** //

class Form
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
	
		Form( void );
		Form( std::string name, int gradeToSign, int gradeToExecute );
		Form( const Form& copy );
		Form& operator=( const Form& copy );
		~Form( void );

		std::string getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int 		getGradeToExecute() const;

		void		beSigned(Bureaucrat& bureaucrat);

		friend std::ostream& operator<<(std::ostream& out, const Form& form);

	private:
		const std::string 	_name;
		bool 				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

#endif