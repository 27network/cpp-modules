/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:44:27 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 07:00:38 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void initContact(void);
		void displayContact(bool inlineDisplay);
		bool isInitialized(void);
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		bool _initialized;

		void _prompt(std::string prompt, std::string &input);
		void _display(std::string str);
};

#endif
