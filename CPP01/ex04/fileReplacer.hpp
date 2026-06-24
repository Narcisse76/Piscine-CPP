/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:45:25 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:09:29 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILEREPLACER_HPP__
# define __FILEREPLACER_HPP__

#include <string>
#include <iostream>
#include <fstream>

class FileReplacer
{
    public:
        FileReplacer(const std::string &file, const std::string &s1, const std::string &s2);
        bool process();
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;
        std::string replaceAll(const std::string &line);
};

#endif
