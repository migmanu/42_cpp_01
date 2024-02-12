/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:28:42 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/12 17:16:52 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	function_ptr_arr[0] = &Harl::debug;
	function_ptr_arr[1] = &Harl::info;
	function_ptr_arr[2] = &Harl::warning;
	function_ptr_arr[3] = &Harl::error;

	code_arr[0] = "debug";
	code_arr[1] = "info";
	code_arr[2] = "warning";
	code_arr[3] = "error";
	return;
}

Harl::~Harl(void)
{
	return;
}

void Harl::complain(std::string level)
{
	int level_digit = 0;
	while (level_digit < 5)
	{
		if (level.compare(code_arr[level_digit]) == 0)
		{
			break;
		}
		level_digit++;
	}
	switch (level_digit)
	{
		default:
			std::cout << "No match!" << std::endl;
			break;
		case 0:
			(this->*function_ptr_arr[0])();
			// Intentional fallthrough
		case 1:
			(this->*function_ptr_arr[1])();
			// Intentional fallthrough
		case 2:
			(this->*function_ptr_arr[2])();
			// Intentional fallthrough
		case 3:
			(this->*function_ptr_arr[3])();
			break;
	}
	return;
}

void Harl::debug(void)
{
	std::cout << "DEBUG:" << std::endl
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING:" << std::endl
			  << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started "
				 "working here since last month."
			  << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO:" << std::endl
			  << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If "
				 "you did, I wouldn’t be asking for more!"
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR:" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
