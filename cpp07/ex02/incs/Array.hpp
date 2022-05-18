#include <iostream>

template <class T>
class	Array
{
	private:
		T		*arr;
		size_t	len;
	public:
		Array();					//
		Array(unsigned int src);	//
		~Array();					//
		Array(Array const &src);		
		Array &operator=(Array const &src);
		T &operator[](int i);
};


template <typename T>
Array<T> & Array<T>::operator=(const Array &src)
{
	if (this == src)
		return *this;
	this->len = src.len;
	this->arr = new T[len];
	for(size_t i = 0; i < len; i++)
	{
		this->arr[i] = src.arr[i];
	}
	return src;
}

template <typename T>
Array<T>::Array()
{
	this->arr = new T[0];
	this->len = 0;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->arr;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	arr = new T[n];
	this->len = n;
}

template <typename T>
Array<T>::Array(Array const &src)
{
	// if (&this == src)
	// 	return this;
	this->len = src.len;
	this->arr = new T[len];
	for(size_t i = 0; i < len; i++)
	{
		this->arr[i] = src.arr[i];
	}
}

template<typename T>
T& Array<T>::operator[](int i)
{
	return this->arr[i];
}