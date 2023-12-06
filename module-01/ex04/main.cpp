/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 07:02:27 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/06 07:08:45 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace(std::string line, std::string s1, std::string s2)
{
	size_t	pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos) {
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
	return (line);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Usage: " << argv[0] << " <file> <string> <replace_with>" << std::endl;
	else {
		std::string		file_name = argv[1];
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];
		std::ifstream	file(file_name.c_str());
		std::ofstream	new_file((file_name + ".replace").c_str());
		std::string		line;

		if (!file.is_open())
			std::cout << "Error: Can't open file" << std::endl;
		else if (!new_file.is_open())
			std::cout << "Error: Can't create new file" << std::endl;
		else {
			while (std::getline(file, line)) {
				line = replace(line, s1, s2);
				new_file << line << std::endl;
			}
			file.close();
			new_file.close();
		}
	}
	return (0);
}
