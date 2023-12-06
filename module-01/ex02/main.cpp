/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 02:38:01 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 02:40:46 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "> ADDRESSES" << std::endl;
	std::cout << "str:    " << &str << std::endl;
	std::cout << "strPtr: " << strPtr << std::endl;
	std::cout << "strRef: " << &strRef << std::endl;

	std::cout << std::endl << "> VALUES" << std::endl;
	std::cout << "str:    " << str << std::endl;
	std::cout << "strPtr: " << *strPtr << std::endl;
	std::cout << "strRef: " << strRef << std::endl;

	return (0);
}
