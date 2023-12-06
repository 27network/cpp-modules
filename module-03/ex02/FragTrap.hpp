/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:21:09 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 11:45:28 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap &copy);
		FragTrap& operator=(const FragTrap& x);

		void highFivesGuys(void);
		std::string getType(void) const;
	private:
		FragTrap(void);
};

#endif
