#include "stdafx.h"

/********************王道2019年chapter-3.2 ，应用题第3题（P37）********************************
1、题目：
	利用两个栈S1、S2来模拟一个队列，已知栈的4个运算定义如下:
		Push(S,x);					//元素x入栈S 
		Pop(S,x)；					//S出栈并将出栈的值赋给x
		StackEmpty(S)；				//判断栈是否为空
		StackOverflow(S)；			//判	断栈是否满
	那么如何利用栈的运算来实现该队列的3个运算（形参由读者根据要求自己设计):
		Enqueue;        //将元素x入队
		Dequeue;        //出队，并将出队元素存储在x中
		QueueEmpty;  	//判断队列是台为空
2、算法思想：
	1°：
**********************************************************************************************/