/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:13:10 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 18:01:01 by jhouyet          ###   ########.fr       */
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
};

#endif