#pragma once
#include"m_data.h"

namespace yxb
{
	template<typename T = int>
	class BinaryTreeitem
	{
	private:
		yxb::Data<T>a;//����
		//ĸ�׽ڵ�
		// yxb::BinaryTreeitem*parent;
		//������Լ��ϣ����ǹ����������Ҫ��
		yxb::BinaryTreeitem<T>* lchild;//����
		yxb::BinaryTreeitem<T>* rchild;//�Һ���
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
		void DLRshow();//���������ӡ
		void LDRshow();//���������ӡ
		void LRDshow();//����
	};
};