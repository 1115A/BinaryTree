#include"m_data.h"
template<class T>
yxb::Data<T>::Data()
{
	this->data = new T[1];
	assert(data);
	this->size = 1;//还没初始化
}

template<class T>
yxb::Data<T>::Data(size_t arrsize)
{
	this->data = new T[arrsize];
	assert(data);
	this->size = arrsize;//还没初始化
}

template<class T>
yxb::Data<T>::~Data()
{
	if (this->data)
		delete[]this->data, this->data = nullptr,this->size=0;
	else
		this->data = nullptr,this->size=0;
}

template<class T>
T* yxb::Data<T>::getdata()
{
	return this->data;
}
template<class T>
int yxb::Data<T>::getsize()
{
	return this->size;
}
template<class T>
void yxb::Data<T>::show()
{
	if (this->getdata)
		for (auto i : this->getdata())
			std::cout << i;
			std::cout << std::endl;
}

template<class T>
yxb::Data<T>::Data(Data& a)
{
	delete[]this->data;
	this->data = nullptr;
	this->data = new decltype(a)[a.size];
}

template<class T>
yxb::Data<T>& yxb::Data<T>::operator=(const yxb::Data<T>& c)
{
	yxb::Data<T>a(c);
	return a;

}
