/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 20:11:26 by lrocca            #+#    #+#             */
/*   Updated: 2021/10/30 14:47:13 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook {
	private:
		Contact	_contacts[8];
		void	_print() const;
	public:
		Phonebook();
		~Phonebook();
		void	search() const;
		void	add();
};

#endif
