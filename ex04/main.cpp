/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:22:28 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:22:29 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <fstream>
#include <iostream>
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
	std::ifstream infile(infile_name);

	if (!infile.is_open())
	{
		std::cout << "File '" << infile_name << "' not found" << std::endl;

		return (1);
	}
	else
	{
		std::cout << "File opened succesfully." << std::endl;

		std::string outfile_name = infile_name + ".replace";
		std::string line_read;
		std::ofstream outfile(outfile_name);

		while (infile.good())
		{
			std::size_t start_pos = 0;
			std::size_t end_pos = 0;
			std::getline(infile, line_read);
			while (start_pos != std::string::npos)
			{
				start_pos = line_read.find(needle, end_pos);
				if (start_pos == std::string::npos)
				{
					outfile << line_read.substr(end_pos, line_read.npos);
				}
				else
				{
					outfile << line_read.substr(end_pos, start_pos);
					outfile << replacement;
					end_pos = start_pos + needle.length();
				}
			}
			if (infile.good())
				outfile << "\n";
		}
		outfile.close();
	}

	return (0);
}
