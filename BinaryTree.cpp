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
void yxb::BinaryTree<T>::DLRshow()//���������ӡ:���ݹ飬����������ͬ
{
	if (this)
	{
		this->a.show();
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
	}

}

template<typename T>
void yxb::BinaryTree<T>::LDRshow()//����
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
