#include "Span.hpp"

Span::Span():n(0){}
Span::Span(unsigned int n): n(n) {}
Span::Span(const Span &other):n(other.n), numbers(other.numbers) { std::cout << "copy constructor called." << std::endl;}
Span &Span::operator=(const Span &other)
{
	if(this != &other)
	{
		this->n = other.n;
		numbers = other.numbers;
	}
	std::cout << "assignment operator called." << std::endl;
	return *this;
}
Span::~Span() {}

void Span::addNumber(int num)
{
	if(numbers.size() >= n)
		throw std::runtime_error("No capacity!");
	numbers.push_back(num);
}
long long Span::shortestSpan()
{
	if(numbers.empty())
		throw std::runtime_error("Container is empty!");
	else if(numbers.size() < 2)
		throw std::runtime_error("Container has only one element!");
	std::vector<int> temp = numbers;
	std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator it;
	long long shortestSpan = (long long)temp[1] - (long long)temp[0];
	for (size_t i = 1; i < temp.size(); i++)
	{
		long long diff = (long long)temp[i] - (long long)temp[i - 1];
		if (diff < shortestSpan)
			shortestSpan = diff;
	}
	return shortestSpan;
}
long long Span::longestSpan()
{

	if(numbers.empty())
		throw std::runtime_error("Container is empty!");
	else if(numbers.size() < 2)
		throw std::runtime_error("Container has only one element!");
	int min_value = *(std::min_element(numbers.begin(), numbers.end()));
	int max_value = *(std::max_element(numbers.begin(), numbers.end()));
	long long longestSpan = (long long)max_value - (long long)min_value;
	return longestSpan;
}
