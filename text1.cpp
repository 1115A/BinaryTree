#include"Bitreeitem.h"

int main()
{
	yxb::BinaryTreeitem<float>b1, b2, b3;
	b1.setdata(1.2);
	b2.setdata(3.1);
	b3.setdata(2.4);
	b1.setlchild(&b2);
	b1.setrchild(&b3);
	/*b1.DLRshow();*/
	b1.queueshow();
}