
#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <exception>

class Span
{
	private:
		unsigned int N;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		void addNumber(int num);
		int shortestSpan();
		int longestSpan();

}
#endif
