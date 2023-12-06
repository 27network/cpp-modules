/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <kiroussa@oss@xtrm.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:30:27 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 11:09:53 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(ClapTrap &copy);
		ClapTrap& operator=(const ClapTrap& x);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		virtual std::string		getType(void) const;
	private:
		ClapTrap(void);
	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

		bool			_checkEnergy(void);
};

#endif
