#pragma once
#include"common.cpp"
namespace yxb
{
	template<class T=int>
	class Data
	{
	private:
		//需要的数据
		T* data{ nullptr };//可创建相关数据类型的数组
		size_t size{0};
	public:
		Data();
		Data(size_t arrsize);
		~Data();
		T* getdata();
		int getsize();
		void show();
		Data(Data &a);
		yxb::Data<T>& operator=(const yxb::Data<T> & c);

	};
}
