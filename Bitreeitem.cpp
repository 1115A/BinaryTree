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
yxb::BinaryTreeitem<T>::BinaryTreeitem()/*Ĭ�Ϲ��캯��*/
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
yxb::BinaryTreeitem<T>::~BinaryTreeitem()//��������
{
	this->a.~Data();
	this->lchild = nullptr;
	this->rchild = nullptr;
}

template<class T>
void yxb::BinaryTreeitem<T>::show()//��ӡ
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
void yxb::BinaryTreeitem<T>::DLRshow()//���������ӡ:���ݹ飬����������ͬ
{
	if (this)
	{
		this->a.show();
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
	}

}

template<class T>
void yxb::BinaryTreeitem<T>::LDRshow()//����
{
	if (this)
	{
		this->a.show(this->a.getlchild());
		this->a.show();
		this->a.show(this->a.getrchild());
	}
}

template<class T>
void yxb::BinaryTreeitem<T>::LRDshow()//����
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
//��α���
//1.�����ڵ����
//2.�Ӳ���ʱѭ�����Ӷ����г�һ��Ԫ�ز�����
//��������ӽڵ㣬�������
//������Һ��ӽڵ�Ҳ�������

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
yxb::BinaryTreeitem<T>::BinaryTreeitem()/*Ĭ�Ϲ��캯��*/
{
	this->a.Data<T>();
	this->lchild = nullptr;
	this->rchild = nullptr;
}

template<typename T>
yxb::BinaryTreeitem<T>::~BinaryTreeitem()//��������
{
	this->a.~Data();
	this->lchild = nullptr;
	this->rchild = nullptr;
}

template<typename T>
void yxb::BinaryTreeitem<T>::show()//��ӡ
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
void yxb::BinaryTreeitem<T>::DLRshow()//���������ӡ:���ݹ飬����������ͬ
{
	if (this)
	{
		this->a.show();
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
	}

}

template<typename T>
void yxb::BinaryTreeitem<T>::LDRshow()//����
{
	if (this)
	{
		this->a.show(this->a.getlchild());
		this->a.show();
		this->a.show(this->a.getrchild());
	}
}

template<typename T>
void yxb::BinaryTreeitem<T>::LRDshow()//����
{
	if (this)
	{
		this->a.show(this->a.getlchild());
		this->a.show(this->a.getrchild());
		this->a.show();
	}
}

