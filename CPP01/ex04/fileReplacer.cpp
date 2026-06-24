/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:45:27 by trambure          #+#    #+#             */
/*   Updated: 2025/12/22 13:09:15 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileReplacer.hpp"

FileReplacer::FileReplacer(const std::string &file,
                           const std::string &s1,
                           const std::string &s2)
: _filename(file), _s1(s1), _s2(s2) {}

std::string FileReplacer::replaceAll(const std::string &line)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(_s1, pos)) != std::string::npos)
    {
        result.append(line.substr(pos, found - pos));
        result.append(_s2);
        pos = found + _s1.size();
    }
    result.append(line.substr(pos));
    return (result);
}

bool FileReplacer::process()
{
    if (_s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return (1);
    }

    std::ifstream in(_filename.c_str());
    if (!in)
    {
        std::cerr << "Error: Cannot open input file." << std::endl;
        return (1);
    }

    std::ofstream out((_filename + ".replace").c_str());
    if (!out)
    {
        std::cerr << "Error: Cannot create output file." << std::endl;
        return (1);
    }

    std::string line;
    while (std::getline(in, line))
    {
        out << replaceAll(line);
        if (!in.eof())
            out << "\n";
    }
    return (0);
}
