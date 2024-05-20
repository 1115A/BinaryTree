#include"m_data.h"
template<typename T>
yxb::Data<T>::Data():size(0),data(nullptr)
{
}

template<typename T>
yxb::Data<T>::Data(size_t arrsize)
{
	this->data = new T[arrsize];
	assert(data);
	this->size = 0;//还没初始化
}

template<typename T>
yxb::Data<T>::~Data()
{
	if (this->data)
		delete[]this->data, this->data = nullptr,this->size=0;
	else
		this->data = nullptr,this->size=0;
}

template<typename T>
T* yxb::Data<T>::getdata()
{
	return this->data;
}
template<typename T>
int yxb::Data<T>::getsize()
{
	return this->size;
}
template<typename T>
void yxb::Data<T>::show()
{
	if (this->getdata)
		for (auto i : this->getdata())
			std::cout << i;
			std::cout << std::endl;
}


//拷贝构造函数
//有bug
//template<typename T>
//yxb::Data<T>::Data(Data<T>& a)
//{
//	delete this->data;
//	this->data = new[a.datasize()];
//}


