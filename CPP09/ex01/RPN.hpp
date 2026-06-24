/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 09:46:14 by trambure          #+#    #+#             */
/*   Updated: 2026/06/23 10:53:11 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
    private:
        std::stack<int>  _data;
        std::string      _input;
    public:
        RPN(const std::string &input);
	    RPN(const RPN &other);
	    RPN &operator=(const RPN &other);
	    ~RPN();

        int calculus();
};

#endif