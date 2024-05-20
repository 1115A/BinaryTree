#pragma once
#include"m_data.h"

namespace yxb
{
	template<typename T = int>
	class BinaryTreeitem
	{
	private:
		yxb::Data<T>a;//数据
		//母亲节点
		// yxb::BinaryTreeitem*parent;
		//后面可以加上，但是构造和析构需要改
		yxb::BinaryTreeitem<T>* lchild;//左孩子
		yxb::BinaryTreeitem<T>* rchild;//右孩子
	public:
		T* getlchild();
		T* getrchild();
		bool setlchild(BinaryTreeitem<T>*left);
		bool setrchild(BinaryTreeitem<T>*right);
		void setdata(T a);
		bool setdata(T a, size_t n);
		BinaryTreeitem();
		~BinaryTreeitem();
		void show();
		void show(BinaryTreeitem<int>* p);
		void DLRshow();//先序遍历打印
		void LDRshow();//中序遍历打印
		void LRDshow();//后序
	};
};