#include <iostream>

template <typename T> 
void swap(T x, T y)
{
	T tmp;
	tmp = x;
	x = y;
	y =  tmp;
}

template <typename P>
P min(P x, P y)
{ return (x > y ? y :  x);}

template <typename T>
T max(T x, T y)
{ return (x < y ? y :  x);}

int main( void ) 
{
	int a = 2;
	int b = 3;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

// int main()
// {
// 	float i = 5, j = 7;
// 	char one = 'a', two = 'b';
// 	swap(i, j);
// 	swap(one, two);


// 	std::cout << j << i << std::endl;
// 	std::cout << one << two << std::endl;
// 	std::cout << j << two << std::endl;
// }
