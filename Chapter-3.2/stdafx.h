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
typedef struct {
	ElemType data[MaxSize];
	int front, rear;         //front-->��ͷָ��           rear-->��βָ��
 }SqQueue;







//��ʽ���нڵ�Ķ���
typedef struct {
	ElemType data;
	struct LinkNode* next;
}LinkNode;
//��ʽ���нṹ��Ķ���
typedef struct {
	LinkNode *front, *rear;        //��ͷ���Ͷ�β���ָ��
}LinkQueue;





