#pragma once

// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include "stdio.h"
#include "tchar.h"
#include "Windows.h"
#include <cstdio>
#include <ctime>
#include <cmath>  


#define MaxSize 50
typedef int ElemType;







//˳����нṹ��Ķ���
typedef struct SqQueue{
	ElemType data[MaxSize];
	int front, rear;         //front-->��ͷָ��           rear-->��βָ��
 }SqQueue;

//��tag��������Q.front==Q.rearʱ�Ķ��нṹ��
typedef struct SqQueue_1 {
	ElemType data[MaxSize];
	int front, rear;         //front-->��ͷָ��           rear-->��βָ��
	int tag;                 //tag==0&&Q.front==Q.rear��ʾ�ӿգ�tag==1&&Q.front==Q.rear��ʾ����;
}SqQueue_1;





//��ʽ���нڵ�Ķ���
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode;
//��ʽ���нṹ��Ķ���
typedef struct LinkQueue{
	LNode *front, *rear;        //��ͷ���Ͷ�β���ָ��
}LinkQueue;





//˳��ջ�ṹ��Ķ���
typedef struct {
	ElemType data[MaxSize];   //ջ��������
	int top;            //ջ��ָ��
}SqStack;

//��ʽջ�Ľṹ�嶨�壨int�ͣ�
typedef struct LSNode {
	int data;
	struct LSNode* next;
}LSNode, * LinkStack;