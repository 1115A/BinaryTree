#pragma once
#include"common.cpp"
namespace yxb
{
	template<typename T=int>
	class Data
	{
	private:
		//��Ҫ������
		T* data{ nullptr };//�ɴ�������������͵�����
		size_t size{0};
	public:
		Data();
		Data(size_t arrsize);
		~Data();
		T* getdata();
		int getsize();
		void show();
	/*	Data(Data<T> &a);*/ //�������캯��

	};
}