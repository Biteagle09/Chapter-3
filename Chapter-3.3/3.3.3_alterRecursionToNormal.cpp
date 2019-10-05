#include "stdafx.h"

/********************王道2019年chapter-3.3 ，应用题第1题（P88）********************************
1、题目：
	利用一个栈实现以下递归函数的非递归计算：
				= 1,								n=0;
		Pn(x)	=2x,								n=1;
				=2xP(n-1)(x)-2(n-1)P(n-2)(x)        n>1
2、算法思想：
	1°：设置一个栈用于保存n和对应的PA（x）值;
	2°：栈中相邻元素的Pn（x）有题中关系；
	3°：然后边出栈边计算P（x），栈空后该值就计算出来了。
**********************************************************************************************/

double Pn(int n, double x) {
	struct myStack{
		int no;                 //保存n的值
		double val;	            //保存Pn的值		
	}mst[MaxSize];
	int top = -1 , i;
	double fv1 = 1, fv2 = 2 * x;     //n=0, n=1是的初值
	for (i = n; i >= 2; i--) {
		mst[++top].no = i;
	}

	while (top >=0 ) {
		mst[top].val = 2 * x * fv2 - 2 * (mst[top].no - 1) * fv1;
		fv1 = fv2;
		fv2 = mst[top--].val;
	}

	if (n == 0) return fv1;
	return fv2;
}


double Pn_recursion(int n, double x) {
	if (n == 0) return 1;
	if (n == 1) return 2 * x;
	if (n > 1) return 2 * x * Pn_recursion(n - 1, x) - 2 * (n - 1) * Pn_recursion(n - 2, x);
}