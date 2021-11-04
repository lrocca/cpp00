/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:38:49 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/04 20:14:36 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	phonebook;
	std::string	cmd;

	std::cout << "Welcome to Crappy Awesome PhoneBook" << std::endl;
	std::cout << "-----------------------------------" << std::endl;

	while (1) {
		std::cout << "phonebook$ ";
		std::getline(std::cin, cmd);

		if (std::cin.eof() || std::cin.fail()) {
			std::cout << std::endl;
			break ;
		}
		else if (!cmd.compare("EXIT"))
			break ;
		else if (!cmd.compare("ADD"))
			phonebook.add();
		else if (!cmd.compare("SEARCH"))
			phonebook.search();
		else
			std::cout << "Command not found. Try ADD, SEARCH or EXIT." << std::endl;
	}
}
