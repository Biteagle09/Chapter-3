#include "stdafx.h"



//1������һ����ʽ���еĽڵ�
LinkNode* createLinkNode(int data) {
	LinkNode* newLinkNode = (LinkNode*)malloc(sizeof(LinkNode));
	if (newLinkNode) {
		newLinkNode->data = data;
		newLinkNode->next = NULL;
	}
	return newLinkNode;
}


//1-1������һ����ʽ���У������Ŷ�ͷָ��Ͷ�βָ�룩
LinkQueue* createLinkQueue() {
	LinkQueue *LQ = (LinkQueue*)malloc(sizeof(LinkQueue));
	return LQ;
}



//2-1����ʼ��һ��˳�����
void InitSqQueue(SqQueue &SQ) {
	SQ.front = SQ.rear = 0;
}

//2-2����ʼ��һ����ʽ����
void InitLinkQueue(LinkQueue &LQ) {
	LQ.front = LQ.rear;
	LQ.front->next = NULL;
}



//3-1���ж�˳������Ƿ�Ϊ��
bool isEmpty(SqQueue SQ) {
	if (SQ.front == SQ.rear) return true;
	else return false;
}

//3-2���ж���ʽ�����Ƿ�Ϊ��
bool isEmpty(LinkQueue LQ) {
	if (LQ.front == LQ.rear) return true;
	else return false;
}



//4-1��˳����У�ѭ�����У��Ľ���
void EnQueue(SqQueue &SQ, ElemType x) {
	if ((SQ.rear + 1) % MaxSize == SQ.front) {
		printf("The Queue is full!!!\n");
		return;
	} 
	SQ.data[SQ.rear] = x;
	SQ.rear = (SQ.rear + 1) % MaxSize;
}

//4-2����ʽ���еĽ���
void EnQueue(LinkQueue &LQ, ElemType x) {

}


//5-1��˳����У�ѭ�����У��ĳ���
void DeQueue(SqQueue &SQ, ElemType &e) {
	if (SQ.front == SQ.rear) {
		printf("The Queue is null!!!\n");
		return;
	}
	e = SQ.data[SQ.front];
	SQ.front = (SQ.front +1 ) % MaxSize;
}

//5-2����ʽ���еĳ���
void DeQueue(LinkQueue &LQ, ElemType &e) {

}


//6-1����ȡ˳����ж�ͷԪ��


//6-2����ȡѭ�����еĶ�ͷԪ��

