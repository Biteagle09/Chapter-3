#include "stdafx.h"

/********************王道2019年chapter-3.2 ，应用题第2题（P78）********************************
1、题目：
	Q是一个队列，S是一个空栈，实现将队列中的元素逆置的算法;
2、算法思想：
	1°：将队列中的元素依次出队，同时进入栈中
	2°：将栈中的元素依次出栈，同时进入队列，即可完成逆置
**********************************************************************************************/

/*逆置这个队列*/
void invertSqQueue(SqStack S, SqQueue &Q) {
	int e;
	while (Q.front != Q.rear) {
		e = Q.data[Q.front];
		Q.front = (Q.front + 1) % MaxSize;
		S.data[++S.top] = e;
	}
	while (S.top != -1) {
		e = S.data[S.top--];
		Q.data[Q.rear] = e;
		Q.rear = (Q.rear + 1) % MaxSize;
	}
}