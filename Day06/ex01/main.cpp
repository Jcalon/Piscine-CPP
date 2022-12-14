/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crazyd <crazyd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:10:03 by crazyd            #+#    #+#             */
/*   Updated: 2022/08/29 18:27:36 by crazyd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
	int	value;
};

uintptr_t	serialize(Data * ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data	*data = new Data();
	Data	*deserialized_data;
	uintptr_t	serialized_data;

	data->value = 42;
	std::cout << "Data address : " << data << std::endl;
	serialized_data = serialize(data);
	std::cout << "Data serialized uintptr_t : " << serialized_data << std::endl;
	deserialized_data = deserialize(serialized_data);
	std::cout << "Data deserialized address : " << deserialized_data << " = " << data << std::endl;
	std::cout << "Data deserialized value : " << deserialized_data->value << " = " << data->value << std::endl;
	delete data;
	return (0);
}
