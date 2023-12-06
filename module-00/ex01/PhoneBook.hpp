/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:44:23 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 02:05:54 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		PhoneBook(PhoneBook &copy);
		PhoneBook& operator=(const PhoneBook& x);

		void addContact(void);
		void searchContact(void);
	private:
		Contact		_contacts[8];
		int			_nbContacts;
		int			_index;
};

#endif
