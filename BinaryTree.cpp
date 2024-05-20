#include "BinaryTree.h"





template<typename T>
yxb::BinaryTree<T>::BinaryTree()
{
	this->a.BinaryTreeitem<T>();
}

template<typename T>
yxb::BinaryTree<T>::~BinaryTree()
{

}

template<typename T>
void yxb::BinaryTree<T>::DLRshow()//先序遍历打印:：递归，后面两种相同
{
	if (this)
	{
		this->a.show();
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
	}

}

template<typename T>
void yxb::BinaryTree<T>::LDRshow()//中序
{
	if(this)
	{
		this->a.show(this->a.getlchild());
		this->a.show();
		this->a.show(this->a.getrchild());
	}
}

template<typename T>
void yxb::BinaryTree<T>::LRDshow()
{
	if (this)
	{
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
		this->a.show();
	}
}
