#pragma once

// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include "stdio.h"
#include "tchar.h"
#include "Windows.h"
#include <cstdio>
#include <ctime>
#include <cmath>
#include <string>    


#define MaxSize 50
typedef int elemType;







//˳��ṹ��Ķ���
typedef struct {
	elemType data[MaxSize];   //ջ��������
	elemType top;            //ջ��ָ��
}SqStack;







//��ʽջ�Ľṹ�嶨�壨int�ͣ�
typedef struct LSNode {
	int data;
	struct LSNode *next;
}LSNode, *LinkStack;


