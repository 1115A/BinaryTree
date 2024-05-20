#include"Bitreeitem.h"

int main()
{
	yxb::BinaryTreeitem<int>b1, b2, b3;
	b1.setdata(1);
	b2.setdata(3);
	b3.setdata(2);
	b1.setlchild(&b2);
	b1.setrchild(&b3);
	b1.DLRshow();
}