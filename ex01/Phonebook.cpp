/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:34:16 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/04 18:00:03 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
	_index = 0;
	_saved = 0;
};

PhoneBook::~PhoneBook() {
	std::cout << "Your contacts have been successfully destroyed. See you soon!" << std::endl;
};

void	PhoneBook::add(void) {
	_contacts[_index].prompt();
	_index = (_index + 1) % BOOK_SIZE;
	_saved = _saved + _saved < 8;
}

void	PhoneBook::search(void) const {
	if (!_saved) {
		std::cout << "No contacts saved. Add one by using the ``ADD'' command." << std::endl;
		return ;
	}

	std::cout << std::right << std::setfill(' ') << std::setw(10) << "index" << '|';
	std::cout << std::right << std::setfill(' ') << std::setw(10) << "first name" << '|';
	std::cout << std::right << std::setfill(' ') << std::setw(10) << "last name" << '|';
	std::cout << std::right << std::setfill(' ') << std::setw(10) << "nickname" << std::endl;

	for (int i = 0; i < BOOK_SIZE; i++)
		_contacts[i].print(i + 1);
}
