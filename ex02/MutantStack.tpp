#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(){}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other): std::stack<T>(other)
{
}

template<typename T>
MutantStack &MutantStack<T>::operator=(const MutantStack &other)
{
	std::stack<T>::operator=(other);
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
typename T::deque<T>::iterator MutantStack<T>::begin()
{

}
