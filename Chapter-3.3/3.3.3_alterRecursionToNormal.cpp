#include "stdafx.h"

/********************����2019��chapter-3.3 ��Ӧ�����1�⣨P88��********************************
1����Ŀ��
	����һ��ջʵ�����µݹ麯���ķǵݹ���㣺
				= 1,								n=0;
		Pn(x)	=2x,								n=1;
				=2xP(n-1)(x)-2(n-1)P(n-2)(x)        n>1
2���㷨˼�룺
	1�㣺����һ��ջ���ڱ���n�Ͷ�Ӧ��PA��x��ֵ;
	2�㣺ջ������Ԫ�ص�Pn��x�������й�ϵ��
	3�㣺Ȼ��߳�ջ�߼���P��x����ջ�պ��ֵ�ͼ�������ˡ�
**********************************************************************************************/

double Pn(int n, double x) {
	struct myStack{
		int no;                 //����n��ֵ
		double val;	            //����Pn��ֵ		
	}mst[MaxSize];
	int top = -1 , i;
	double fv1 = 1, fv2 = 2 * x;     //n=0, n=1�ǵĳ�ֵ
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