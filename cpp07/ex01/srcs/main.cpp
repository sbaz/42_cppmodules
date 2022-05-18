#include "../incs/Iter.hpp"


template <typename T>
T	addone(T src)
{
	src++;
	std::cout << src << std::endl;
	return src;
}

template <typename T>
void	iter(T *addr, size_t len, T (*func) (T))
{
	for (size_t i = 0; len > i; i++)
	{
		// std::cout << "pollo" <<  len << std::endl;
		(*func)(addr[i]);
	}
}


int main()
{
	int arr[5] = {2, 4565, 84, 854, 54};
	iter(arr, (size_t) 5, &addone);
}