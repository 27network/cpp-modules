/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 06:38:57 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 06:55:56 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
	public:
		Weapon(const std::string type);
		~Weapon(void);

		std::string const &getType(void) const;
		void setType(std::string type);
	private:
		std::string _type;
};

#endif
