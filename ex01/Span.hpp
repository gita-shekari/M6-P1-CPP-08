
#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <exception>

class Span
{
	private:
		unsigned int n;
		std::vector<int> numbers;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		void addNumber(int num);
		template<typename It>
		void addNumber(It begin, It end);
		long long shortestSpan();
		long long longestSpan();

};

template<typename It>
void Span::addNumber(It begin, It end)
{
	while (begin != end)
	{
		addNumber(*begin);
		++begin;
	}
}

#endif
