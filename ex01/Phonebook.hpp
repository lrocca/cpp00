/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 20:11:26 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/04 17:30:55 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

# define	BOOK_SIZE	8

class PhoneBook {
	private:
		Contact	_contacts[BOOK_SIZE];
		int		_index;
		int		_saved;

		void	_print() const;
	public:
		PhoneBook();
		~PhoneBook();
		void	search() const;
		void	add();
};

#endif
