/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:39 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/27 01:16:35 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
	return ;
}

Ice::Ice( Ice const & Ice ) : AMateria(Ice) {
	*this = Ice;
	return ;
}

Ice::~Ice( void ) {
	return ;
}

Ice & Ice::operator=( Ice const & Ice ) {
	if (this != &Ice)
		return (*this);
	return (*this);
}

Ice* Ice::clone() const {
	Ice *clone = new Ice();
	return (clone);
}

void Ice::use( ICharacter & target) {
	std::cout << "* shoots an ice bolt at ";
	if (target.getName().empty())
		std::cout << "Unamed *" << std::endl;
	else
		std::cout << target.getName() << " *" << std::endl;
	return ;
}