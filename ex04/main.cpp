/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:22:28 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/12 16:38:14 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments. Arguments must be 3:"
				  << " <filename>, needle, replacement" << std::endl;

		return (1);
	}

	std::string infile_name = argv[1];
	std::string needle = argv[2];
	std::string replacement = argv[3];
	std::ifstream infile(infile_name.c_str());

	if (!infile.is_open())
	{
		std::cout << "File '" << infile_name << "' not found" << std::endl;

		return (1);
	}
	else if (infile.peek() == EOF)
	{
		std::cout << "File '" << infile_name << "' is empty" << std::endl;

		return (1);
	}
	else
	{
		std::cout << "File opened succesfully." << std::endl;

		std::string outfile_name = infile_name + ".replace";
		std::string line_read;
		std::ofstream outfile(outfile_name.c_str());

		while (infile.good())
		{
			std::size_t needle_start_pos = 0;
			std::size_t needle_end_pos = 0;
			std::getline(infile, line_read);
			while (needle_start_pos != std::string::npos)
			{
				needle_start_pos = line_read.find(needle, needle_end_pos);
				if (needle_start_pos == std::string::npos)
				{
					outfile << line_read.substr(needle_end_pos, line_read.npos);
				}
				else
				{
					outfile << line_read.substr(needle_end_pos, needle_start_pos);
					outfile << replacement;
					needle_end_pos = needle_start_pos + needle.length();
				}
			}
			if (infile.good())
				outfile << "\n";
		}
		outfile.close();
	}

	return (0);
}
