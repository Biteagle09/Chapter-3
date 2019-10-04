#include "stdafx.h"



//1、创建一个链式队列的节点
LinkNode* createLinkNode(int data) {
	LinkNode* newLinkNode = (LinkNode*)malloc(sizeof(LinkNode));
	if (newLinkNode) {
		newLinkNode->data = data;
		newLinkNode->next = NULL;
	}
	return newLinkNode;
}


//1-1、创建一个链式队列（包含着队头指针和队尾指针）
LinkQueue* createLinkQueue() {
	LinkQueue *LQ = (LinkQueue*)malloc(sizeof(LinkQueue));
	return LQ;
}



//2-1、初始化一个顺序队列
void InitSqQueue(SqQueue &SQ) {
	SQ.front = SQ.rear = 0;
}

//2-2、初始化一个链式队列
void InitLinkQueue(LinkQueue &LQ) {
	LQ.front = LQ.rear;
	LQ.front->next = NULL;
}



//3-1、判断顺序队列是否为空
bool isEmpty(SqQueue SQ) {
	if (SQ.front == SQ.rear) return true;
	else return false;
}

//3-2、判断链式队列是否为空
bool isEmpty(LinkQueue LQ) {
	if (LQ.front == LQ.rear) return true;
	else return false;
}



//4-1、顺序队列（循环队列）的进队
void EnQueue(SqQueue &SQ, ElemType x) {
	if ((SQ.rear + 1) % MaxSize == SQ.front) {
		printf("The Queue is full!!!\n");
		return;
	} 
	SQ.data[SQ.rear] = x;
	SQ.rear = (SQ.rear + 1) % MaxSize;
}

//4-2、链式队列的进队
void EnQueue(LinkQueue &LQ, ElemType x) {

}


//5-1、顺序队列（循环队列）的出队
void DeQueue(SqQueue &SQ, ElemType &e) {
	if (SQ.front == SQ.rear) {
		printf("The Queue is null!!!\n");
		return;
	}
	e = SQ.data[SQ.front];
	SQ.front = (SQ.front +1 ) % MaxSize;
}

//5-2、链式队列的出队
void DeQueue(LinkQueue &LQ, ElemType &e) {

}


//6-1、读取顺序队列队头元素


//6-2、读取循环队列的队头元素

