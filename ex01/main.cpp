/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:38:49 by lrocca            #+#    #+#             */
/*   Updated: 2021/10/30 16:06:05 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Phonebook.hpp"

int	main(void) {
	Phonebook	phonebook;
	std::string	cmd;

	while (1) {
		std::cout << "Type the command to execute: ";
		std::cin >> cmd;
		if (!cmd.compare("EXIT"))
			break ;
		else if (!cmd.compare("ADD"))
			;
		else if (!cmd.compare("SEARCH"))
			;
	}
}
