/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayoub <tayoub@@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 02:06:38 by tayoub            #+#    #+#             */
/*   Updated: 2025/08/29 02:07:06 by tayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
	PhoneBook phonebook;
	std::string cmd;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, cmd)) break;

		if (cmd == "ADD") {
			phonebook.add();
		} else if (cmd == "SEARCH") {
			phonebook.search();
		} else if (cmd == "EXIT") {
			break;
		}
	}
	return 0;
}
