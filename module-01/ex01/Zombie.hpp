/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 02:27:29 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 06:59:54 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void announce(void);
		void setName(std::string name);
	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
