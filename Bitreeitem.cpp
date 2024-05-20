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
