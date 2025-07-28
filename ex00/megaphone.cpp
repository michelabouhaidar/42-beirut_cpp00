/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:47:34 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/07/28 22:17:50 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j = 0;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}