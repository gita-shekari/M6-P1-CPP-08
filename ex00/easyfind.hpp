
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>

template<typename T>
typename T::iterator easyFind(T& data, int num)
{
	typename T::iterator it;
	it = std::find(data.begin(), data.end(), num);
	if (it == data.end())
	{
		throw std::runtime_error("Not found");
	}
	return it;
}
#endif
