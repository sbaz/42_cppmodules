#include "../incs/Iter.hpp"



template <typename T>
void	addone(T src)
{
	src++;
	std::cout << src << std::endl;
}

template <typename T>
void	iter(T *addr, int len, void (*func) (T))
{
	for (int i = 0; len < i; i++)
	{
		(*func)(addr[i]);
	}
}
