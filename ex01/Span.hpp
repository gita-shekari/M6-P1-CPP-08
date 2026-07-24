
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
		long long shortestSpan();
		long long longestSpan();

};
#endif
