/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_tester.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:09:36 by jecaudal          #+#    #+#             */
/*   Updated: 2021/02/05 10:36:57 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Description :
**		This file contain all tools functions for testers.
**		include output overload operator
*/

#ifndef UTILS_TESTER_HPP
# define UTILS_TESTER_HPP

# include <vector>
# include <iostream>

namespace ft
{
	void print_caca(void) { std::cout << "CACA FT" << std::endl; }
}

namespace std
{
	void print_caca(void) { std::cout << "CACA STD" << std::endl; }
}

# define FT_TEST false
# define STD_TEST true

void	print_header(std::string content);
void	menu(std::vector<void (*)()> lst_funs, std::vector<std::string> lst_messages, std::string title);

#endif