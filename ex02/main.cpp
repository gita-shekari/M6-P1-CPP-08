#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
	std::cout << "\n--- stack test---\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\n--- same result with list ---\n";
	std::list<int> my_list;
	my_list.push_back(5);
	my_list.push_back(17);
	std::cout << my_list.back() << std::endl;
	my_list.pop_back();
	std::cout << my_list.size() << std::endl;
	my_list.push_back(3);
	my_list.push_back(5);
	my_list.push_back(737);
	my_list.push_back(0);
	std::list<int>::iterator it_l = my_list.begin();
	std::list<int>::iterator ite_l = my_list.end();
	++it_l;
	--it_l;
	while (it_l != ite_l)
	{
		std::cout << *it_l << std::endl;
		++it_l;
	}

	std::cout << "\n--- same result with vector ---\n";
	std::vector<int> my_vector;
	my_vector.push_back(5);
	my_vector.push_back(17);
	std::cout << my_vector.back() << std::endl;
	my_vector.pop_back();
	std::cout << my_vector.size() << std::endl;
	my_vector.push_back(3);
	my_vector.push_back(5);
	my_vector.push_back(737);
	my_vector.push_back(0);
	std::vector<int>::iterator it_v = my_vector.begin();
	std::vector<int>::iterator ite_v = my_vector.end();
	++it_v;
	--it_v;
	while (it_v != ite_v)
	{
		std::cout << *it_v << std::endl;
		++it_v;
	}

	std::cout << "\n--- empty stack ---\n";
	MutantStack<std::string> emptystack;
	std::cout << "empty stack size : " << emptystack.size() << std::endl;

	std::cout << "\n--- reversing iterator starts from end , testing other type ---\n";
	emptystack.push("Hello");
	emptystack.push("world");
	emptystack.push("!");
	MutantStack<std::string>::iterator it_b =  emptystack.begin();
	MutantStack<std::string>::iterator it_e = emptystack.end();
	while (it_e != it_b)
	{
		--it_e;
		std::cout << *it_e << std::endl;
	}

	std::cout << "\n--- copy constructor test ---\n";
	MutantStack<int> s(mstack);
	MutantStack<int>::iterator it_copy = s.begin();
	MutantStack<int>::iterator ite_copy = s.end();
	++it_copy;
	--it_copy;
	while (it_copy != ite_copy)
	{
		std::cout << *it_copy << std::endl;
		++it_copy;
	}

	std::cout << "\n--- assignment operator test ---\n";
	MutantStack<std::string> assined_stack;
	assined_stack = emptystack;
	MutantStack<std::string>::iterator it_a = assined_stack.begin();
	MutantStack<std::string>::iterator ite_a = assined_stack.end();
	while (it_a != ite_a)
	{
		std::cout << *it_a << std::endl;
		++it_a;
	}
	return 0;
}
