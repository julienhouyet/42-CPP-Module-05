/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:20:47 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/11 13:26:17 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>
#include <string>

// ************************************************************************** //
//                            Bureaucrat Class                                //
// ************************************************************************** //

class Bureaucrat
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
	
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& copy );
		Bureaucrat& operator=( const Bureaucrat& copy );
		~Bureaucrat( void );

		std::string		getName() const;
		int 			getGrade() const;

		void	promoteGrade( void );
		void	demoteGrade( void );

		friend std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

	private:
		const std::string 	_name;
		int 				_grade;
};

#endif