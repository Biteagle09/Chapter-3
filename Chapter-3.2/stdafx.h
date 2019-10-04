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
typedef struct {
	ElemType data[MaxSize];
	int front, rear;         //front-->队头指针           rear-->队尾指针
 }SqQueue;







//链式队列节点的定义
typedef struct {
	ElemType data;
	struct LinkNode* next;
}LinkNode;
//链式队列结构体的定义
typedef struct {
	LinkNode *front, *rear;        //队头结点和队尾结点指针
}LinkQueue;





