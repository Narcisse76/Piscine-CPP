/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:31:30 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 13:35:55 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
	    FragTrap(const std::string& name);
	    FragTrap(const FragTrap& src);
	    FragTrap& operator=(const FragTrap& other);
	    ~FragTrap();
	    void highFivesGuys();
};