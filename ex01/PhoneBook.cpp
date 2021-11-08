/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:34:16 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/05 22:06:32 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	_index = 0;
	_saved = 0;
};

PhoneBook::~PhoneBook() {
	std::cout << "Your contacts have been successfully destroyed. See you soon!"
	<< std::endl;
};

void	PhoneBook::add(void) {
	_contacts[_index].prompt();
	_index = (_index + 1) % BOOK_SIZE;
	if (_saved <= BOOK_SIZE)
		_saved++;
}

static	void	printCol(std::string title) {
	std::cout << std::right << std::setfill(' ') << std::setw(10) << title;
}

void	PhoneBook::search(void) const {
	if (!_saved) {
		std::cout << "No contacts saved. Add one by using the ``ADD'' command."
		<< std::endl;
		return ;
	}

	std::cout << "-------------------------------------------" << std::endl;

	printCol("index");
	std::cout << '|';
	printCol("first name");
	std::cout << '|';
	printCol("last name");
	std::cout << '|';
	printCol("nickname");
	std::cout << std::endl;

	for (int i = 0; i < BOOK_SIZE; i++)
		_contacts[i].printRow(i + 1);

	std::cout << "-------------------------------------------" << std::endl;

	std::cout << std::endl << "Type the index of a contact to view the details."
	<< std::endl << "Type 0 to go back." << std::endl;

	int	index = 0;

	while (!std::cin.eof() && !std::cin.fail()) {
		std::cout << "index = ";

		std::string	value;
		std::getline(std::cin, value);
		index = atoi(value.c_str());

		if (index > BOOK_SIZE || index < 0) {
			std::cout << "The index must be a number between 1 and 8."
			<< std::endl << "Type 0 to go back." << std::endl;
		}
		else if (index >= _saved) {
			std::cout << "The selected contact doesn't exist yet." << std::endl;
			return ;
		}
		else
			break ;
	}

	if (std::cin.eof() || std::cin.fail() || !index)
		return ;

	std::cout << std::endl;
	_contacts[index - 1].printDetails();
}
