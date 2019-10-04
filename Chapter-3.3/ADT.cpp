#include "stdafx.h"



//1、创建一个链式队列的节点
LNode* createLNode(ElemType data) {
	LNode* newLNode = (LNode*)malloc(sizeof(LNode));
	if (newLNode) {
		newLNode->data = data;
		newLNode->next = NULL;
	}
	return newLNode;
}


//1-1、创建一个链式队列（包含着队头指针和队尾指针）
//在初始化里已经整合了


//2-1、初始化一个顺序队列
void InitSqQueue(SqQueue& SQ) {
	SQ.front = SQ.rear = 0;
}

/**
*2-2、初始化一个链式队列(带头结点的)
**/
void InitLinkQueue(LinkQueue &LQ) {
	LQ.front = LQ.rear = (LNode*)malloc(sizeof(LNode));
	if (LQ.front) {
		LQ.front->next = NULL;
	}
	
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

//4-2、链式队列的进队(无需判断队满)
void EnQueue(LinkQueue &LQ, ElemType x) {
	LNode *newNode = createLNode(x);
	LQ.rear->next = newNode;
	LQ.rear = newNode;
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

//5-2、链式队列的出队（需判断队空）
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


//6-1、读取顺序队列队头元素
ElemType GetHead(SqQueue SQ) {
	if (!isEmpty(SQ)) {
		return SQ.data[SQ.front];
	} else {
		printf("The SqQueue is null in GetHead()!!!\n");
		return NULL;
	}
}

//6-2、读取循环队列的队头元素
ElemType GetHead(LinkQueue LQ) {
	if (!isEmpty(LQ)) {
		return LQ.front->next->data;;
	}else {
		printf("The LinkQueue is null in GetHead()!!!\n");
		return NULL;
	}
}




/******栈系列*************************************************************************************************************************/



//创建一个链式栈的节点
LSNode* createLSNode(int data) {
	LSNode* newLSNode = (LSNode*)malloc(sizeof(LSNode));
	if (newLSNode) {
		newLSNode->data = data;
		newLSNode->next = NULL;
	}
	return newLSNode;
}


//创建一个链式栈（不带头结点）
LinkStack createLinkStack() {
	LinkStack firstLSNode = (LinkStack)malloc(sizeof(LinkStack));
	if (firstLSNode) {
		firstLSNode = NULL;
	}
	return firstLSNode;
}



//初始化一个顺序栈
void InitSqStatck(SqStack& S) {
	S.top = -1;
}

//初始化一个链式栈（链式栈是不带头结点的）
void InitLinkStatck(LinkStack& LS) {
	LS = NULL;
}



//判断一个顺序栈是否为空
bool SqStackIsEmpty(SqStack S) {
	return S.top == -1;
}

//判断一个链式栈是否为空
bool LinkStackIsEmpty(LinkStack LS) {
	return LS == NULL;
}



//顺序栈的进栈操作
bool Push(SqStack& S, int x) {
	if (S.top == MaxSize - 1) {
		return false;
	}
	S.data[++S.top] = x;
	return true;
}

//链式栈(不带头结点)的进栈操作
void Push(LinkStack& LS, int x) {
	LSNode* newLSNode = createLSNode(x);
	if (LS) {
		newLSNode->next = LS;
		LS = newLSNode;
	}
	else {
		LS = newLSNode;
	}
}



//顺序栈的出栈操作
bool Pop(SqStack& S, int& element) {
	if (S.top == -1) {
		return false;
	}
	element = S.data[S.top--];
	return true;
}

//链式栈的出栈操作（int型）
bool Pop(LinkStack& LS, int& element) {
	if (!LS) {
		return false;
	}
	element = LS->data;
	LS = LS->next;
	return true;
}



//获取顺序栈顶元素
bool Top(SqStack S, int& element) {
	if (S.top == MaxSize - 1) {
		return false;
	}
	element = S.data[S.top];
	return true;
}

//获取链式栈栈顶元素
bool Top(LinkStack LS, int& element) {
	if (!LS) {
		return false;
	}
	element = LS->data;
	return true;
}



//销毁顺序栈
void ClearSqStack(SqStack& S) {
	S.top = -1;
	//free(*S);
}

//销毁链式栈
void ClearLinkStack(LinkStack& LS) {
	LS = NULL;
	free(LS);
}