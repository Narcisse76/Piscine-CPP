/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:14:34 by trambure          #+#    #+#             */
/*   Updated: 2026/04/13 15:14:18 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data = {42, 3.14f, 2.718245, 'A'};
	
    std::cout << "Original data: "
          << "i=" << data.i << ", "
          << "f=" << data.f << ", "
          << "d=" << data.d << ", "
          << "c=" << data.c << std::endl;
	
          uintptr_t raw = Serializer::Serialize(&data);
	std::cout << "Serialized data: " << raw << std::endl;
	
    Data* deserializedData = Serializer::Deserialize(raw);	
    std::cout << "Deserialized data: "
			  << "i=" << deserializedData->i << ", "
			  << "f=" << deserializedData->f << ", "
			  << "d=" << deserializedData->d << ", "
			  << "c=" << deserializedData->c << std::endl;
	return 0;
}