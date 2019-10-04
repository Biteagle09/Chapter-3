#include "stdafx.h"


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
void InitSqStatck(SqStack &S) {
	S.top = -1;
}

//初始化一个链式栈（链式栈是不带头结点的）
void InitLinkStatck(LinkStack &LS) {
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
bool Push(SqStack &S, int x) {
	if (S.top == MaxSize - 1){
		return false;
	}
	S.data[++S.top] = x;
	return true;
}

//链式栈(不带头结点)的进栈操作
void Push(LinkStack &LS, int x) {
	LSNode *newLSNode = createLSNode(x);
	if (LS) {
		newLSNode->next = LS;
		LS = newLSNode;
	}else {
		LS = newLSNode;
	}
}



//顺序栈的出栈操作
bool Pop(SqStack &S, int &element) {
	if (S.top == -1) {
		return false;
	}
	element = S.data[S.top--];
	return true;
}

//链式栈的出栈操作（int型）
bool Pop(LinkStack &LS, int &element) {
	if (!LS) {
		return false;
	}
	element = LS->data;
	LS = LS->next;
	return true;
}



//获取顺序栈顶元素
bool Top(SqStack S, int &element) {
	if (S.top == MaxSize - 1) {
		return false;
	}
	element = S.data[S.top];
	return true;
}

//获取链式栈栈顶元素
bool Top(LinkStack LS, int &element) {
	if (!LS) {
		return false;
	}
	element = LS->data;
	return true;
}



//销毁顺序栈
void ClearSqStack(SqStack &S) {
	S.top = -1;
	//free(*S);
}

//销毁链式栈
void ClearLinkStack(LinkStack &LS) {
	LS = NULL;
	free(LS);
}








