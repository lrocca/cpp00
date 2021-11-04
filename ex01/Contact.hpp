/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 21:25:21 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/04 17:19:14 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact {
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	public:
		Contact();
		~Contact();
		void	prompt(void);
		void	print(int index) const;
};

#endif
