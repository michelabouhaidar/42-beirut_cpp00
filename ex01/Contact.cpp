/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:54:15 by tayoub            #+#    #+#             */
/*   Updated: 2025/09/06 01:20:37 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Contact.hpp"

static bool isDigitPlus(const std::string& s)
{
	if (s.empty())
		return false;
	bool has_digit = false;
	for (std::string::size_type i = 0; i < s.size(); ++i)
	{
		unsigned char c = static_cast<unsigned char>(s[i]);
		if (std::isdigit(c))
			has_digit = true;
		else if (c != '+' && c != ' ')
			return false;
	}
	return has_digit;
}

static bool isAllSpaces(const std::string& s)
{
	if (s.empty())
		return true;
	for (std::string::size_type i = 0; i < s.size(); ++i)
	{
		if (!std::isspace(static_cast<unsigned char>(s[i])))
		return false;
	}
	return true;
}

Contact::Contact() {}

bool Contact::setFirstName(const std::string& first_name)
{
	if (isAllSpaces(first_name))
		return false;
	first_name_ = first_name;
	return true;
}

bool Contact::setLastName(const std::string& last_name)
{
	if (isAllSpaces(last_name))
		return false;
	last_name_ = last_name;
	return true;
}

bool Contact::setNickname(const std::string& nickname)
{
	if (isAllSpaces(nickname))
		return false;
	nickname_ = nickname;
	return true;
}

bool Contact::setPhoneNumber(const std::string& phone_number)
{
	if (isAllSpaces(phone_number) || !isDigitPlus(phone_number))
		return false;
	phone_number_ = phone_number;
	return true;
}

bool Contact::setDarkestSecret(const std::string& darkest_secret)
{
	if (isAllSpaces(darkest_secret))
		return false;
	darkest_secret_ = darkest_secret;
	return true;
}

const std::string& Contact::getFirstName() const
{
	return first_name_;
}

const std::string& Contact::getLastName() const
{
	return last_name_;
}

const std::string& Contact::getNickname() const
{
	return nickname_;
}

const std::string& Contact::getPhoneNumber() const
{
	return phone_number_;
}

const std::string& Contact::getDarkestSecret() const
{
	return darkest_secret_;
}

bool Contact::isEmpty() const
{
	return first_name_.empty() && last_name_.empty() && nickname_.empty() && phone_number_.empty() && darkest_secret_.empty();
}

void Contact::displayContactInfo() const
{
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Nickname: " << getNickname() << std::endl;
	std::cout << "Phone Number: " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
}
