/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 07:02:27 by kiroussa          #+#    #+#             */
/*   Updated: 2024/01/04 00:22:11 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <sys/stat.h>

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
		if (file_name.empty()) {
			std::cout << "Error: Empty file name" << std::endl;
			return (0);
		}
		std::string		s1 = argv[2];
		if (s1.empty()) {
			std::cout << "Error: Cannot replace empty string" << std::endl;
			return (0);
		}
		std::string		s2 = argv[3];

		struct stat buf;
		stat(argv[1], &buf);
		if (S_ISDIR(buf.st_mode)){
			std::cerr << "Error: " << argv[1] << ": Path is a directory" << std::endl;
			return (1);
		}
		std::ifstream file(file_name.c_str());
		if (file.fail()){
			std::cerr << "Error: " << argv[1] << ": incorrect path or missing permissions" << std::endl; 
			return (1);
		}

		std::ofstream	new_file((file_name + ".replace").c_str());
		if (new_file.fail()){
			std::cerr << "Error: output file failed" << std::endl;
			return (1);
		}
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
