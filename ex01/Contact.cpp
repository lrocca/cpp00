/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:34:11 by lrocca            #+#    #+#             */
/*   Updated: 2021/10/30 15:53:14 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>

#include "Contact.hpp"

Contact::Contact() {
	_firstName = "ciaociaociaociao";
	_lastName = "ciao";
	_nickName = "ciao";
};

Contact::~Contact() {};

// void	Contact::set()

static void	printCol(std::string value) {
	if (value.length() > 9)
		std::cout << value.substr(0, 9) << ".";
	else
		std::cout << std::setfill(' ') << std::setw(10) << value;
}

void	Contact::print(int index) const {
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << index << "|";
	printCol(_firstName);
	std::cout << "|";
	printCol(_lastName);
	std::cout << "|";
	printCol(_nickName);
	std::cout << std::endl;
}
