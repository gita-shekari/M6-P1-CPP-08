
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::cout << "\n--- testing vector ---\n";
	std::vector<int> numbers_vector;
	numbers_vector.push_back(10);
	numbers_vector.push_back(20);
	numbers_vector.push_back(30);
	try
	{
		std::cout << *(easyFind(numbers_vector, 20)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << *(easyFind(numbers_vector, 0)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--- tesing list ---\n";
	std::list<int> numbers_list;
	numbers_list.push_back(1);
	numbers_list.push_back(2);
	numbers_list.push_back(3);
	try
	{
		std::cout << *(easyFind(numbers_list, 1)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << *(easyFind(numbers_list, 0)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n--- tesing deque---\n";
	std::deque<int> numbers_deque;
	numbers_deque.push_back(1);
	numbers_deque.push_back(2);
	numbers_deque.push_back(3);
	try
	{
		std::cout << *(easyFind(numbers_deque, 3)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << *(easyFind(numbers_deque, 0)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
