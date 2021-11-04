/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:34:11 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/04 17:56:55 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>

#include "Contact.hpp"

Contact::Contact() {};

Contact::~Contact() {};

static	std::string	fieldPrompt(std::string field) {
	std::string	value;

	std::cout << std::left << std::setfill('.') << std::setw(17) << field << ": ";
	std::getline(std::cin, value);
	return (value);
}

static	std::string	promptLoop(std::string field, bool numeric) {
	std::string	value;

	while (!std::cin.eof() && !std::cin.fail()) {
		value = fieldPrompt(field);
		if (value.empty())
			std::cout << field << " cannot be empty." << std::endl;
		else if (numeric && value.find_first_not_of("0123456789") != std::string::npos)
			std::cout << field << " must be numeric." << std::endl;
		else
			break ;
	}
	return (value);
}

void	Contact::prompt(void) {
	_firstName = promptLoop("First Name", false);
	_lastName = promptLoop("Last Name", false);
	_nickName = promptLoop("Nickname", false);
	_phoneNumber = promptLoop("Phone Number", true);
	_darkestSecret = promptLoop("Darkest Secret", false);
}

static void	printCol(std::string value) {
	if (value.length() > 9)
		std::cout << value.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setfill(' ') << std::setw(10) << value;
}

void	Contact::print(int index) const {
	if (_firstName.empty())
		return ;
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << index << "|";
	printCol(_firstName);
	std::cout << "|";
	printCol(_lastName);
	std::cout << "|";
	printCol(_nickName);
	std::cout << std::endl;
}
