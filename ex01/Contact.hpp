/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayoub <tayoub@@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:07:59 by tayoub            #+#    #+#             */
/*   Updated: 2025/08/29 01:39:28 by tayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string phone_number_;
		std::string darkest_secret_;
	public:
		Contact();
		bool setFirstName(const std::string& first_name);
		bool setLastName(const std::string& last_name);
		bool setNickname(const std::string& nickname);
		bool setPhoneNumber(const std::string& phone_number);
		bool setDarkestSecret(const std::string& darkest_secret);
		const std::string& getFirstName() const;
		const std::string& getLastName() const;
		const std::string& getNickname() const;
		const std::string& getPhoneNumber() const;
		const std::string& getDarkestSecret() const;
		void displayContactInfo() const;
		bool isEmpty() const;
};

#endif