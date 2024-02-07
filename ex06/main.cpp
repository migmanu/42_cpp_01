/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:28:20 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/07 11:09:53 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 2)
	{
		std::cout
			<< "Program needs exactly 1 argument. Accepted arguments are:"
			<< std::endl << "- debug"
			<< std::endl << "- info"
			<< std::endl << "- warning"
			<< std::endl << "- error"
			<< std::endl;
		return(1);
	}

	std::string	level = argv[1];

	harl.complain(level);

	return (0);
}
