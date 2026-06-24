/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:31:30 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 13:41:26 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
	    FragTrap(const std::string& name);
	    FragTrap(const FragTrap& src);
	    FragTrap& operator=(const FragTrap& other);
	    ~FragTrap();
	    void highFivesGuys();
};

#endif