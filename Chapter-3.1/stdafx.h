#pragma once

// stdafx.h : 标准系统包含文件的包含文件，
// TODO:  在此处引用程序需要的其他头文件
#include "stdio.h"
#include "tchar.h"
#include "Windows.h"
#include <cstdio>
#include <ctime>
#include <cmath>
#include <string>    


#define MaxSize 50








//顺序结构体的定义
typedef struct {
	int data[MaxSize];   //栈的数据域
	int top;            //栈顶指针
}SqStack;







//链式栈的结构体定义
typedef struct LSNode {
	int data;
	struct LSNode *next;
}LSNode, *LinkStack;



