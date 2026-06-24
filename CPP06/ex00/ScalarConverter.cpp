/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:08:39 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 15:13:40 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp" 

  bool isCharLiteral(const std::string& s)
    {
        return s.length() == 1 && std::isprint(s[0]) && !std::isdigit(s[0]);
    }

static bool isPseudoLiteral(const std::string &s) 
{
    return s == "-inff" || s == "+inff" || s == "nanf"
        || s == "-inf"  || s == "+inf"  || s == "nan";
}

static bool isFloatLiteral(const std::string &s) 
{
    if (s.empty() || s[s.size() - 1] != 'f')
        return false;
    std::string trimmed = s.substr(0, s.size() - 1);
    char *end;
    errno = 0;
    strtod(trimmed.c_str(), &end);
    return errno == 0 && *end == '\0' && trimmed.find('.') != std::string::npos;
}

static bool isDoubleLiteral(const std::string &s) 
{
    char *end;
    errno = 0;
    strtod(s.c_str(), &end);
    return errno == 0 && *end == '\0' && s.find('.') != std::string::npos;
}

static bool isIntLiteral(const std::string &s) 
{
    char *end;
    errno = 0;
    strtol(s.c_str(), &end, 10);
    return errno == 0 && *end == '\0' && !s.empty()
        && (s[0] == '-' || s[0] == '+' || isdigit(s[0]));
}

static void printChar(double d) 
{
    if (std::isnan(d) || std::isinf(d))
        std::cout << "char: impossible\n";
    else if (d < 0 || d > 127)
        std::cout << "char: impossible\n";
    else if (!isprint(static_cast<int>(d)))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(d) << "'\n";
}

static void printInt(double d) 
{
    if (std::isnan(d) || std::isinf(d) || d < INT_MIN || d > INT_MAX)
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(d) << "\n";
}

static void printFloat(double d) 
{
    float f = static_cast<float>(d);
    std::cout << "float: ";
    if (std::isinf(f))
        std::cout << (f > 0 ? "+inff" : "-inff") << "\n";
    else if (std::isnan(f))
        std::cout << "nanf\n";
    else 
        std::cout << std::fixed << std::setprecision(1) << f << "f\n";
}

static void printDouble(double d) 
{
    std::cout << "double: ";
    if (std::isinf(d))
        std::cout << (d > 0 ? "+inf" : "-inf") << "\n";
    else if (std::isnan(d))
        std::cout << "nan\n";
    else
        std::cout << std::fixed << std::setprecision(1) << d << "\n";
}

static void printAll(double d) 
{
    printChar(d);
    printInt(d);
    printFloat(d);
    printDouble(d);
}

void ScalarConverter::convert(const std::string &literal) 
{
    if (isCharLiteral(literal)) 
    {
        double d = static_cast<double>(literal[0]);
        printAll(d);
        return;
    }
    
    if (isPseudoLiteral(literal)) 
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        if (literal == "nanf" || literal == "-inff" || literal == "+inff") 
        {
            std::cout << "float: " << literal << "\n";
            if (literal == "nanf")        std::cout << "double: nan\n";
            else if (literal == "-inff")  std::cout << "double: -inf\n";
            else                          std::cout << "double: +inf\n";
        } else {
            if (literal == "nan")        std::cout << "float: nanf\n";
            else if (literal == "-inf")  std::cout << "float: -inff\n";
            else                         std::cout << "float: +inff\n";
            std::cout << "double: " << literal << "\n";
        }
        return;
    }
    
    if (isFloatLiteral(literal)) 
    {
        double d = strtod(literal.substr(0, literal.size() - 1).c_str(), NULL);
        printAll(d);
        return;
    }

    if (isDoubleLiteral(literal)) 
    {
        double d = strtod(literal.c_str(), NULL);
        printAll(d);
        return;
    }

    if (isIntLiteral(literal)) 
    {
        double d = static_cast<double>(strtol(literal.c_str(), NULL, 10));
        printAll(d);
        return;
    }
    std::cerr << "Error: '" << literal << "' is not a valid C++ scalar literal.\n";
}