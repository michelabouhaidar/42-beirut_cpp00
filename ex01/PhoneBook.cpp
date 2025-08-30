/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayoub <tayoub@@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 01:39:01 by tayoub            #+#    #+#             */
/*   Updated: 2025/08/29 02:01:10 by tayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cctype>

PhoneBook::PhoneBook() : size_(0), next_(0) {}

std::string PhoneBook::formatField(const std::string& s)
{
	if (s.size () > 10)
		return s.substr(0, 9) + ".";
	return s;
}

void PhoneBook:: add()
{
	std::string fname, lname, nname, phone, dsecret;
	std::cout << "First Name: ";
	if (!std::getline(std::cin, fname))
		return;
	std::cout << "Last Name: ";	
	if (!std::getline(std::cin, lname))
		return;
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, nname))
		return;
	std::cout << "Phone NUmber: ";
	if (!std::getline(std::cin, phone))
		return;
	std::cout << "Darkest Secret: ";
	if (!std::getline(std::cin, dsecret))
		return;
	Contact &c = contacts_[next_];
	bool ok = true;
	ok = ok && c.setFirstName(fname);
	ok = ok && c.setLastName(lname);
	ok = ok && c.setNickname(nname);
	ok = ok && c.setPhoneNumber(phone);
	ok = ok && c.setDarkestSecret(dsecret);
	if (!ok)
	{
		std::cout << "Invalid input: fields must not be empty/spaces; phone must contain digits.\n";
		return;
	}
	if (size_ < 8)
		size_++;
	next_ = (next_ + 1) % 8;
	std::cout << "Contact saved\n";
}

void PhoneBook::search() const {
	if (size_ == 0)
	{
		std::cout << "PhoneBook is empty.\n";
		return;
	}
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name"  << "|"
			  << std::setw(10) << "Nickname"   << "\n";
	for (int i = 0; i < size_; ++i)
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << formatField(contacts_[i].getFirstName()) << "|"
				  << std::setw(10) << formatField(contacts_[i].getLastName())  << "|"
				  << std::setw(10) << formatField(contacts_[i].getNickname())  << "\n";
	}
	std::cout << "Enter index: ";
	std::string idxStr;
	if (!std::getline(std::cin, idxStr))
		return;
	if (idxStr.empty())
	{
		std::cout << "Invalid index.\n";
		return;
	}
	for (std::string::size_type k = 0; k < idxStr.size(); ++k)
	{
		unsigned char ch = static_cast<unsigned char>(idxStr[k]);
		if (!std::isdigit(ch)) { std::cout << "Invalid index.\n";
			return; }
	}
	int idx = std::atoi(idxStr.c_str());
	if (idx < 0 || idx >= size_)
	{
		std::cout << "Invalid index.\n";
		return;
	}
	contacts_[idx].displayContactInfo();
}