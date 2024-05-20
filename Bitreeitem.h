#pragma once
#include"m_data.h"

namespace yxb
{
	template<typename T>
	class BinaryTreeitem
	{
	private:
		yxb::Data<T>a;//����
		//ĸ�׽ڵ�
		// yxb::BinaryTreeitem*parent;
		//������Լ��ϣ����ǹ����������Ҫ��
		yxb::BinaryTreeitem* lchild;//����
		yxb::BinaryTreeitem* rchild;//�Һ���
	public:
		T* getlchild();
		T* getrchild();
		BinaryTreeitem();
		~BinaryTreeitem();
		void show();
		void show(BinaryTreeitem* p);
	};
}