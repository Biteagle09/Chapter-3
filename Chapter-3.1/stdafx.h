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








//˳��ṹ��Ķ���
typedef struct {
	int data[MaxSize];   //ջ��������
	int top;            //ջ��ָ��
}SqStack;







//��ʽջ�Ľṹ�嶨��
typedef struct LSNode {
	int data;
	struct LSNode *next;
}LSNode, *LinkStack;



