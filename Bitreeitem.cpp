<<<<<<< HEAD
#include "Bitreeitem.h"

template<class T>
T* yxb::BinaryTreeitem<T>::getlchild()
{
	return this->lchild;
}
template<class T>
T* yxb::BinaryTreeitem<T>::getrchild()
{
	return this->rchild;
}

template<class T>
bool yxb::BinaryTreeitem<T>::setlchild(BinaryTreeitem<T>* left)
{
	if (this->getlchild())
		return false;
	else
		this->lchild = left;
	return true;
}

template<class T>
bool yxb::BinaryTreeitem<T>::setrchild(BinaryTreeitem<T>* right)
{
	if (this->getrchild())
		return false;
	else
	this->rchild = right;
	return true;
}

template<class T>
void yxb::BinaryTreeitem<T>::setdata(T a)
{
	this->a[0] = a;
}

template<class T>
bool yxb::BinaryTreeitem<T>::setdata(T a, size_t n)
{
	if (this->a.getsize() < n)
		return false;
	else
		this->a[n] = a;
}

template<class T>
yxb::BinaryTreeitem<T>::BinaryTreeitem()/*默认构造函数*/
{
	this->a.Data<T>();
	this->lchild = nullptr;
	this->rchild = nullptr;
}

template<class T>
yxb::BinaryTreeitem<T>::BinaryTreeitem(size_t n)
{
	yxb::Data<T>temp(n);
	this->a = temp;
}

template<class T>
yxb::BinaryTreeitem<T>::~BinaryTreeitem()//析构函数
{
	this->a.~Data();
	this->lchild = nullptr;
	this->rchild = nullptr;
}

template<class T>
void yxb::BinaryTreeitem<T>::show()//打印
{
	if (this)
		this->a.show();
}

template<class T>
void yxb::BinaryTreeitem<T>::show(BinaryTreeitem<int>* p)
{
	p->show();
}

template<class T>
void yxb::BinaryTreeitem<T>::DLRshow()//先序遍历打印:：递归，后面两种相同
{
	if (this)
	{
		this->a.show();
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
	}

}

template<class T>
void yxb::BinaryTreeitem<T>::LDRshow()//中序
{
	if (this)
	{
		this->a.show(this->a.getlchild());
		this->a.show();
		this->a.show(this->a.getrchild());
	}
}

template<class T>
void yxb::BinaryTreeitem<T>::LRDshow()//后序
{
	if (this)
	{
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
		this->a.show();
	}
}

template<class T>
void yxb::BinaryTreeitem<T>::LDRstackshow()
{
	std::stack<T>s;
	BinaryTreeitem<T>*q=nullptr;
	BinaryTreeitem<T>* p = this;
	while (p||!s.empty())
	{
		if (p)
			s.push(*p), p = p->getrchild();
		else
			 *q= s.pop(), *q.a.show(),p=q->getrchild();
	}
}

template<class T>
void yxb::BinaryTreeitem<T>::queueshow()
//层次遍历
//1.将根节点入队
//2.队不空时循环，从队伍中出一个元素并访问
//如果有左孩子节点，将其入队
//如果有右孩子节点也将其入队

{
	std::queue<T> Q1;
	yxb::BinaryTreeitem<T>pCurrent=*this;
	if (this)
	{
		Q1.push(pCurrent);
		while (!Q1.empty())
		{
			pCurrent = Q1.pop(),pCurrent.show();
			if (pCurrent.lchild)
				Q1.push(pCurrent.lchild);
			if (pCurrent.rchild)
				Q1.push(pCurrent.rchild);
		}
	}
}
=======
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

