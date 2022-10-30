/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:35:41 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/30 18:42:15 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int sed(std::string file, std::string s1, std::string s2)
{
	std::ifstream ifs(file);
	std::string str;
	int	j = 0;
	int i = 0;
	char c;

	if (s1.empty()) {
		std::cout << "Please, make sure s1 is not empty." << std::endl; 
		return (0);
	}
	if (ifs.is_open())
	{
		std::ofstream ofs(file.append(".replace"));
		while (ifs.get(c))
			str += c;
		ifs.close();
		while ((i = str.find(s1, j)) != -1)
		{
			j = i;
			if (s1.compare(s2) == 0)
				j = i + s1.length();
			str.erase(i, s1.length());
			str.insert(i, s2);
		}
		ofs << str;
		ofs.close();
	}
	else
		std::cout << "Failure, cant open the file" << std::endl;
	return (0);
}
