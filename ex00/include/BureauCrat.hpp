/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:20:47 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/11 10:05:05 by jhouyet          ###   ########.fr       */
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
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& copy );
		Bureaucrat& operator=( const Bureaucrat& copy );
		~Bureaucrat( void );

		std::string getName() const;
		int getGrade() const;

	private:
		const std::string 	_name;
		int 				_grade;
};

#endif