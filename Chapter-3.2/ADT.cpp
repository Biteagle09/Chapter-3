#include "stdafx.h"



//1������һ����ʽ���еĽڵ�
LNode* createLNode(ElemType data) {
	LNode* newLNode = (LNode*)malloc(sizeof(LNode));
	if (newLNode) {
		newLNode->data = data;
		newLNode->next = NULL;
	}
	return newLNode;
}


//1-1������һ����ʽ���У������Ŷ�ͷָ��Ͷ�βָ�룩
LinkQueue* createLinkQueue() {
	LinkQueue *LQ = (LinkQueue*)malloc(sizeof(LinkQueue));
	return LQ;
}



//2-1����ʼ��һ��˳�����
void InitSqQueue(SqQueue& SQ) {
	SQ.front = SQ.rear = 0;
}

/**
*2-2����ʼ��һ����ʽ����(��ͷ����)
**/
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

//4-2����ʽ���еĽ���(�����ж϶���)
void EnQueue(LinkQueue &LQ, ElemType x) {
	LNode *newNode = createLNode(x);
	LQ.rear->next = newNode;
	LQ.rear = newNode;
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

//5-2����ʽ���еĳ��ӣ����ж϶ӿգ�
void DeQueue(LinkQueue &LQ, ElemType &e) {
	if (LQ.front == LQ.rear) {
		printf("The Queue is null!!!\n");
		return;
	}
	LNode *p = LQ.front->next;
	e = p->data;
	LQ.front->next = p->next;
	if (LQ.rear == p) LQ.rear = LQ.front;
	free(p);
}


//6-1����ȡ˳����ж�ͷԪ��
ElemType GetHead(SqQueue SQ) {
	return SQ.data[SQ.front];
}

//6-2����ȡѭ�����еĶ�ͷԪ��
ElemType GetHead(LinkQueue LQ) {
	return LQ.front->data;
}
