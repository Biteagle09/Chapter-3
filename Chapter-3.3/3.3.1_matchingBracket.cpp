#include "stdafx.h"

/********************����2019��chapter-3.3 ��Ӧ�����1�⣨P87��********************************
1����Ŀ��
	����һ���������ʽ�а���Բ���š������źͻ�����3�����͵����ţ���дһ���㷨���б���ʽ�е������Ƿ���ԣ����ַ���\0����Ϊ�������ʽ�Ľ�����;
2���㷨˼�룺
	1�㣺����������ʽ�ַ����У�
	2�㣺����ǰ�ַ��������š������š������ţ�������ջ��
	3�㣺����ǰ�ַ��������š��ҷ����š��һ����ţ��򵯳�ջ��Ԫ�أ����뵱ǰ�Ҳ�ͬ�������Ų�ƥ�䣬����Ϊ���ʽƥ����󣬷���false;
**********************************************************************************************/

/*ƥ�������Ƿ���ȷ*/
bool matchBracket(char *ch) {
	SqStack S;
	S.top = -1;
	int i = 0;
	while (ch[i] != '\0') {
		char e;
		switch (ch[i]){
			case '(':
				S.data[++S.top] = '(';
				break;
			case '[':
				S.data[++S.top] = '[';
				break;
			case '{':
				S.data[++S.top] = '{';
				break;
			case ')':
				if (S.data[S.top--] != '(') return false;
				break;
			case ']':
				if (S.data[S.top--] != '[') return false;
				break;
			case '}':
				if (S.data[S.top--] != '{') return false;
				break;
			default:
				break;
		}
		i++;
	}
	if (S.top == -1) {
		return true;
	}else {
		return false;
	}
	
}



