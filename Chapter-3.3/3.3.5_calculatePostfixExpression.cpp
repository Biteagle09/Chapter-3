#include "stdafx.h"

int calculateAB(int a, char op, int b);

/********************����2019��chapter-3.3 �������1�⣨p83��********************************
1����Ŀ��
	����һ����׺���ʽ���������ֵ��
2���㷨˼�룺
	1�㣺������׺���ʽ���У�
	2�㣺����ǰ�ַ������֣�0��9),����ѹ��ջ�У�
	3�㣺����ǰ�ַ��ǲ�������+-/*),���ջ�е����������֣��͵�ǰ�ַ��������㣬���������ѹ��ջ�У�
	4�㣺�����ַ��������ջ��Ԫ�ؼ�Ϊ���ʽ��ֵ
**********************************************************************************************/

/*��׺���ʽ�������ֵ*/
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




/*��Բ�������ֵ*/
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