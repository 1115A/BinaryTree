#pragma once
#include"m_data.h"

namespace yxb
{
	template<typename T>
	class BinaryTreeitem
	{
	private:
		yxb::Data<T>a;//数据
		//母亲节点
		// yxb::BinaryTreeitem*parent;
		//后面可以加上，但是构造和析构需要改
		yxb::BinaryTreeitem* lchild;//左孩子
		yxb::BinaryTreeitem* rchild;//右孩子
	public:
		T* getlchild();
		T* getrchild();
		BinaryTreeitem();
		~BinaryTreeitem();
		void show();
		void show(BinaryTreeitem* p);
	};
}