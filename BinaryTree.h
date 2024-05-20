#pragma once
#include"Bitreeitem.h"
namespace yxb
{
	template<typename T>
	class BinaryTree
	{
	private:
		BinaryTreeitem<T>a
	public:
		void* p;
		BinaryTree();
		~BinaryTree();
		void DLRshow();//先序遍历打印
		void LDRshow();//中序遍历打印
		void LRDshow();//后序
	};
}

