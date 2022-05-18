#include <iostream>

template <class T> class	Array
{
	private:
		T arr[];
	public:
		Array(){ T arr[] = 0;}
		Array(unsigned int src);
		~Array();
		T Array(T const &Array);

};

template <typename T>
Array<T>::Array(unsigned int src) :  {}