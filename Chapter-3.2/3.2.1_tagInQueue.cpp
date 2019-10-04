#include "stdafx.h"

/********************王道2019年chapter-3.2 ，应用题第1题（P37）********************************
1、题目：
	如果希望循环队列中的元素都能得到利用，则需设置一个标志域tag，并以tag的值为0或1来区分队头指针front和队尾指针rear相同时的队列状态是“空”还是“满”。
	试编写与此结构相应的入队和出队算法。
2、算法思想：
1°：在循环队列的类型结构中，增设一个tag的整型变量，进队时置tag为1，出队时置ag为0（因为只有入队操作可能导致队满，也只有出队操作可能导致队空）。
	队列Q初始时，置tag=0、front=rear=0。这样队列的4要素如下：
	
	队空条件：Q.front == Q.rear && Q.tag == 0;
	队满条件：Q.front == Q.rear && Q.tag == 1;
	进队操作：Q.data[Q.rear] = x; Q.rear = (Q.rear+1)%MaxSize; Q.tag = 1;
	出队操作：x = Q.data[Q.front]; Q.front = (Q.front+1)%MaxSize; Q.tag = 0;
**********************************************************************************************/

/*进队操作*/
void EnQueue(SqQueue_1 S1, ElemType x) {
	//判断是否队满
	if (S1.front == S1.rear && S1.tag == 1) {
		printf("The SqQueue_1 is FUll!!!\n");
		return;
	}else {
		S1.data[S1.rear] = x;
		S1.rear = (S1.rear + 1) % MaxSize;
		S1.tag = 1;
	}
}

/*出队操作*/
void DeQueue(SqQueue_1 S1, ElemType &e) {
	//判断石否队空
	if (S1.front == S1.rear && S1.tag == 0) {
		printf("The SqQueue_1 is NUll!!!\n");
		return;
	}else {
		e = S1.data[S1.front];
		S1.front = (S1.front + 1) % MaxSize;
		S1.tag = 0;
	}
}