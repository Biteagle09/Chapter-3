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
//�ڳ�ʼ�����Ѿ�������


//2-1����ʼ��һ��˳�����
void InitSqQueue(SqQueue& SQ) {
	SQ.front = SQ.rear = 0;
}

/**
*2-2����ʼ��һ����ʽ����(��ͷ����)
**/
void InitLinkQueue(LinkQueue &LQ) {
	LQ.front = LQ.rear = (LNode*)malloc(sizeof(LNode));
	if (LQ.front) {
		LQ.front->next = NULL;
	}
	
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
	if (!isEmpty(SQ)) {
		return SQ.data[SQ.front];
	} else {
		printf("The SqQueue is null in GetHead()!!!\n");
		return NULL;
	}
}

//6-2����ȡѭ�����еĶ�ͷԪ��
ElemType GetHead(LinkQueue LQ) {
	if (!isEmpty(LQ)) {
		return LQ.front->next->data;;
	}else {
		printf("The LinkQueue is null in GetHead()!!!\n");
		return NULL;
	}
}




/******ջϵ��*************************************************************************************************************************/



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
void InitSqStatck(SqStack& S) {
	S.top = -1;
}

//��ʼ��һ����ʽջ����ʽջ�ǲ���ͷ���ģ�
void InitLinkStatck(LinkStack& LS) {
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
bool Push(SqStack& S, int x) {
	if (S.top == MaxSize - 1) {
		return false;
	}
	S.data[++S.top] = x;
	return true;
}

//��ʽջ(����ͷ���)�Ľ�ջ����
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



//˳��ջ�ĳ�ջ����
bool Pop(SqStack& S, int& element) {
	if (S.top == -1) {
		return false;
	}
	element = S.data[S.top--];
	return true;
}

//��ʽջ�ĳ�ջ������int�ͣ�
bool Pop(LinkStack& LS, int& element) {
	if (!LS) {
		return false;
	}
	element = LS->data;
	LS = LS->next;
	return true;
}



//��ȡ˳��ջ��Ԫ��
bool Top(SqStack S, int& element) {
	if (S.top == MaxSize - 1) {
		return false;
	}
	element = S.data[S.top];
	return true;
}

//��ȡ��ʽջջ��Ԫ��
bool Top(LinkStack LS, int& element) {
	if (!LS) {
		return false;
	}
	element = LS->data;
	return true;
}



//����˳��ջ
void ClearSqStack(SqStack& S) {
	S.top = -1;
	//free(*S);
}

//������ʽջ
void ClearLinkStack(LinkStack& LS) {
	LS = NULL;
	free(LS);
}