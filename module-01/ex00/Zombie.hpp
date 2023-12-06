/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 02:27:29 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 07:00:11 by kiroussa         ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
