/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:47:34 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/08/31 02:06:18 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
        std::string arg = argv[i];
        for (size_t j = 0; j < arg.length(); j++)
		{
            std::cout << static_cast<char>(std::toupper(arg[j]));
        }
    }
	std::cout << std::endl;
	return 0;
}