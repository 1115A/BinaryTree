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
void yxb::BinaryTreeitem<T>::show(BinaryTreeitem* p)
{
	p->show();
}
