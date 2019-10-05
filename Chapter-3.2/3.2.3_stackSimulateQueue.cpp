#include "stdafx.h"

/********************王道2019年chapter-3.2 ，应用题第3题（P78）********************************
1、题目：
	利用两个栈S1、S2来模拟一个队列，已知栈的4个运算定义如下:
		Push(S,x);					//元素x入栈S 
		Pop(S,x)；					//S出栈并将出栈的值赋给x
		StackEmpty(S)；				//判断栈是否为空
		StackOverflow(S)；			//判	断栈是否满
	那么如何利用栈的运算来实现该队列的3个运算（形参由读者根据要求自己设计):
		Enqueue_1;        //将元素x入队
		Dequeue_1;        //出队，并将出队元素存储在x中
		QueueEmpty;  	//判断队列是台为空
2、算法思想：
	1°：利用两个栈S1和S2来模拟一个队列，当需要向队列中插入一个元素时，用S1来存放已输入的元素，即S1执行入栈操作。
		当需要出队时，则对S2执行出栈操作。由于从栈中取出元素的顺序是原顺序的逆序，所以，必须先将S1中的所有元素全部出栈并入栈到S2中，
		再在S2中执行出栈操作，即可实现出队操作，而在执行此操作前必须判断S2是否为空，否则会导致顺序混乱。当栈S1和S2都为空时队列为空。
		总结如下：
			1）对S2的出栈操作用做出队，若S2为空，则先将S1中的所有元素送入S2;
			2）对S1的入栈操作用做入队，若S1满，必须先保证S2为空，才能将S1中的元素全部插入S2中。
**********************************************************************************************/

/*两个栈来模拟入队
int Enqueue_1(SqStack &S1, SqStack &S2, ElemType e) {
	if (!StackOverflow(S1)) {
		Push(S1,e);
		return 1;
	}
	if (StackOverflow(S1) && !StackEmpty(S2)) {
		printf("队列满，无法再入队!!!\n");
		return 0
	}
	if (StackOverflow(S1) && StackEmpty(S2)) {
		int x;
		while (!StackEmpty(S1)) {
			Pop(S1, x);
			Push(S2, x);
		}
	}
	Push(S1, e);
	return 1;
}
*/




/*两个栈来模拟出队
void Dequeue_1(SqStack S1, SqStack S2, ElemType &e) {
	if (!StackEmpty(S2)) {
		Pop(S2, e);
	}else if (StackEmpty(S1)) {
		printf("队空,无法再出队!!!\n");
	}else {
		int x;
		while (!StackEmpty(S1)) {
			Pop(S1, x);
			Push(S2, x);
		}
		Pop(S2, e);
	}
}
*/




/*判断队列是否为空
bool QueueEmpty(SqStack S1, SqStack S2) {
	return StackEmpty(S1) && StackEmpty(S2);
}
*/