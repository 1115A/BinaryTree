#include "Bitreeitem.h"
template<typename T>
T* yxb::BinaryTreeitem<T>::getlchild()
{
	return this->lchild;
}
template<typename T>
T* yxb::BinaryTreeitem<T>::getrchild()
{
	return this->rchild;
}

template<typename T>
bool yxb::BinaryTreeitem<T>::setlchild(BinaryTreeitem<T>* left)
{
	if (this->getlchild())
		return false;
	else
		this->lchild = left;
	return true;
}

template<typename T>
bool yxb::BinaryTreeitem<T>::setrchild(BinaryTreeitem<T>* right)
{
	if (this->getrchild())
		return false;
	else
	this->rchild = right;
	return true;
}

template<typename T>
void yxb::BinaryTreeitem<T>::setdata(T a)
{
	this->a[0] = a;
}

template<typename T>
bool yxb::BinaryTreeitem<T>::setdata(T a, size_t n)
{
	if (this->a.getsize() < n)
		return false;
	else
		this->a[n] = a;
}

template<typename T>
yxb::BinaryTreeitem<T>::BinaryTreeitem()/*默认构造函数*/
{
	this->a.Data<T>();
	this->lchild = nullptr;
	this->rchild = nullptr;
}

template<typename T>
yxb::BinaryTreeitem<T>::~BinaryTreeitem()//析构函数
{
	this->a.~Data();
	this->lchild = nullptr;
	this->rchild = nullptr;
}

template<typename T>
void yxb::BinaryTreeitem<T>::show()//打印
{
	if (this)
		this->a.show();
}

template<typename T>
void yxb::BinaryTreeitem<T>::show(BinaryTreeitem<int>* p)
{
	p->show();
}

template<typename T>
void yxb::BinaryTreeitem<T>::DLRshow()//先序遍历打印:：递归，后面两种相同
{
	if (this)
	{
		this->a.show();
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
	}

}

template<typename T>
void yxb::BinaryTreeitem<T>::LDRshow()//中序
{
	if (this)
	{
		this->a.show(this->a.getlchild());
		this->a.show();
		this->a.show(this->a.getrchild());
	}
}

template<typename T>
void yxb::BinaryTreeitem<T>::LRDshow()//后序
{
	if (this)
	{
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
		this->a.show();
	}
}
