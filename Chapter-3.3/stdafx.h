#pragma once

// stdafx.h : 标准系统包含文件的包含文件，
// TODO:  在此处引用程序需要的其他头文件
#include "stdio.h"
#include "tchar.h"
#include "Windows.h"
#include <cstdio>
#include <ctime>
#include <cmath>  


#define MaxSize 50
typedef int ElemType;







//顺序队列结构体的定义
typedef struct SqQueue{
	ElemType data[MaxSize];
	int front, rear;         //front-->队头指针           rear-->队尾指针
 }SqQueue;

//有tag域来区分Q.front==Q.rear时的队列结构体
typedef struct SqQueue_1 {
	ElemType data[MaxSize];
	int front, rear;         //front-->队头指针           rear-->队尾指针
	int tag;                 //tag==0&&Q.front==Q.rear表示队空；tag==1&&Q.front==Q.rear表示队满;
}SqQueue_1;





//链式队列节点的定义
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode;
//链式队列结构体的定义
typedef struct LinkQueue{
	LNode *front, *rear;        //队头结点和队尾结点指针
}LinkQueue;





//顺序栈结构体的定义
typedef struct {
	ElemType data[MaxSize];   //栈的数据域
	int top;            //栈顶指针
}SqStack;

//链式栈的结构体定义（int型）
typedef struct LSNode {
	int data;
	struct LSNode* next;
}LSNode, * LinkStack;