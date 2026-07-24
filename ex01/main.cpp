#include "Span.hpp"
#include <climits>
#include <ctime>
#include <cstdlib>

#define MAX_VAL 10000

int main()
{
	std::cout << "\n--- subject test---\n";
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	////////////////////////////////////////////////////
	std::cout << "\n--- testing with no element ---\n";
	Span sp_zero = Span();
	std::cout << "addNumber: ";
	try { sp_zero.addNumber(1); }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }

	std::cout << "shortestSpan: ";
	try { std::cout << sp_zero.shortestSpan() << '\n'; }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }

	std::cout << "longestSpan: ";
	try { std::cout << sp_zero.longestSpan() << '\n'; }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }

	//////////////////////////////////////////////////
	std::cout << "\n--- testing with one element---\n";
	Span sp_one = Span(1);
	try { sp_one.addNumber(0); }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }

	std::cout << "shortestSpan: ";
	try { std::cout << sp_one.shortestSpan() << '\n'; }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }

	std::cout << "longestSpan: ";
	try { std::cout << sp_one.longestSpan() << '\n'; }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }
	///////////////////////////////////////////////////
	std::cout << "\n--- testing with two elements MIN and MAX integer---\n";
	Span sp_two = Span(2);
	try { sp_two.addNumber(INT_MIN); sp_two.addNumber(INT_MAX);}
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }

	std::cout << "shortestSpan: ";
	try { std::cout << sp_two.shortestSpan() << '\n'; }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }

	std::cout << "longestSpan: ";
	try { std::cout << sp_two.longestSpan() << '\n'; }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }
	////////////////////////////////////////////////////

	std::cout << "\n--- testing with larg number of elements---\n";
	Span sp_larg(MAX_VAL);
	srand(time(NULL));
	std::vector<int> numbers_vector;
	for (size_t i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers_vector.push_back(value);
	}
	try
	{
		sp_larg.addNumber(numbers_vector.begin(), numbers_vector.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "shortestSpan: ";
	try { std::cout << sp_larg.shortestSpan() << '\n'; }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }

	std::cout << "longestSpan: ";
	try { std::cout << sp_larg.longestSpan() << '\n'; }
	catch (const std::exception& e) { std::cout << e.what() << '\n'; }
	Span sp_larg_copy(sp_larg);
	sp_one = sp_larg;
	return 0;
}
