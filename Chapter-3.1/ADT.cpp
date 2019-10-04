#include "stdafx.h"


//����һ����ʽջ�Ľڵ�
LSNode* createLSNode(int data) {
	LSNode* newLSNode = (LSNode*)malloc(sizeof(LSNode));
	if (newLSNode) {
		newLSNode->data = data;
		newLSNode->next = NULL;
	}
	return newLSNode;
}


//����һ����ʽջ������ͷ��㣩
LinkStack createLinkStack() {
	LinkStack firstLSNode = (LinkStack)malloc(sizeof(LinkStack));
	if (firstLSNode) {
		firstLSNode = NULL;
	}
	return firstLSNode;
}



//��ʼ��һ��˳��ջ
void InitSqStatck(SqStack &S) {
	S.top = -1;
}

//��ʼ��һ����ʽջ����ʽջ�ǲ���ͷ���ģ�
void InitLinkStatck(LinkStack &LS) {
	LS = NULL;
}



//�ж�һ��˳��ջ�Ƿ�Ϊ��
bool SqStackIsEmpty(SqStack S) {
	return S.top == -1;
}

//�ж�һ����ʽջ�Ƿ�Ϊ��
bool LinkStackIsEmpty(LinkStack LS) {
	return LS == NULL;
}



//˳��ջ�Ľ�ջ����
bool Push(SqStack &S, int x) {
	if (S.top == MaxSize - 1){
		return false;
	}
	S.data[++S.top] = x;
	return true;
}

//��ʽջ(����ͷ���)�Ľ�ջ����
void Push(LinkStack &LS, int x) {
	LSNode *newLSNode = createLSNode(x);
	if (LS) {
		newLSNode->next = LS;
		LS = newLSNode;
	}else {
		LS = newLSNode;
	}
}



//˳��ջ�ĳ�ջ����
bool Pop(SqStack &S, int &element) {
	if (S.top == -1) {
		return false;
	}
	element = S.data[S.top--];
	return true;
}

//��ʽջ�ĳ�ջ������int�ͣ�
bool Pop(LinkStack &LS, int &element) {
	if (!LS) {
		return false;
	}
	element = LS->data;
	LS = LS->next;
	return true;
}



//��ȡ˳��ջ��Ԫ��
bool Top(SqStack S, int &element) {
	if (S.top == MaxSize - 1) {
		return false;
	}
	element = S.data[S.top];
	return true;
}

//��ȡ��ʽջջ��Ԫ��
bool Top(LinkStack LS, int &element) {
	if (!LS) {
		return false;
	}
	element = LS->data;
	return true;
}



//����˳��ջ
void ClearSqStack(SqStack &S) {
	S.top = -1;
	//free(*S);
}

//������ʽջ
void ClearLinkStack(LinkStack &LS) {
	LS = NULL;
	free(LS);
}








