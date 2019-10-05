#include "stdafx.h"

int calculateAB(int a, char op, int b);

/********************王道2019年chapter-3.3 ，例题第1题（p83）********************************
1、题目：
	给出一个后缀表达式，求出其数值。
2、算法思想：
	1°：遍历后缀表达式序列；
	2°：若当前字符是数字（0～9),则将其压入栈中；
	3°：若当前字符是操作符（+-/*),则从栈中弹出两个数字，和当前字符进行运算，运算完后将其压入栈中；
	4°：所有字符遍历完后，栈顶元素即为表达式的值
**********************************************************************************************/

/*后缀表达式求其具体值*/
int calcPostExpression(char ch[]) {
	SqStack S;
	S.top = -1;
	int i = 0;
	int a, b, result = 0;
	char c;

	while (ch[i] != '\0') {
		if (ch[i] >= '0' && ch[i] <= '9') {
			S.data[++S.top] = ch[i] - '0';
		}else {
			b = S.data[S.top--];
			a = S.data[S.top--];
			c = ch[i];
			result = calculateAB(a, c, b);
			S.data[++S.top] = result;
		}
		i++;
	}
	return result;
}




/*针对操作符求值*/
int calculateAB(int a, char op, int b) {
	switch (op) {
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		if (b != 0) {
			return a / b;
		}
		else {
			printf("The denominator can't be 0!!!\n");
			return NULL;
		}
		break;
	}
	return 0;
}