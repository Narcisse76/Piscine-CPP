/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:24:12 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 13:38:19 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std:: string& name);
        ScavTrap(const ScavTrap& src);
        ~ScavTrap();
        ScavTrap&   operator=(const ScavTrap& other);
        void    guardGate();
};