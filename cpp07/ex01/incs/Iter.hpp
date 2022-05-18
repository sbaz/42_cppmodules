#include <iostream>

template <typename T>
void	iter(T *addr, int len, void (*func) (T));

template <typename T>
void	addone(T src);
