#include "stdafx.h"

char Top(MyStatck S);
bool StatckEmpty(MyStatck S);
bool StatckFull(MyStatck S);
void Pop(MyStatck &S, char& x);
void Push(MyStatck& S, char x);

/********************����2019��chapter-3.3 �������3�⣨p83��********************************
1����Ŀ��
	��׺���ʽת��׺���ʽ��
2���㷨˼�룺
	1:����������׺���ʽ��
	2:��������������ţ���ֱ����ջ��
	3:���������������ջһֱ����Ԫ�أ�ֱ�������뵱ǰ������ƥ���������
	4:������ ��+�� or ��-������ֱ�ӳ�ջ��
	5:������ ��*�� or ���¡�����һֱ��ջֱ����+�� or ��-���ַ���
	6:���������֣���
**********************************************************************************************/



void infixToPost(char infix[]) {
	MyStatck S;
	S.top = -1;
	
	Post post;
	post.len = 0;

	int i = 0;
	char x;
	char c;
	while (infix[i] != '\0') {
		c = infix[i];
		switch (c){
		case '(':
		case '[':
		case '{':
			Push(S, c);
			break;
		case '+':
		case '-':
			while (!StatckEmpty(S) && Top(S) != '(' && Top(S) != '[' && Top(S) != '{') {
				Pop(S, x);
				post.data[++post.len] = x;	
			}
			Push(S, c);
			break;
		case '*':
		case '/':
			while (!StatckEmpty(S) && Top(S) != '(' && Top(S) != '[' && Top(S) != '{' && Top(S) == '/' || Top(S) == '*') {
				Pop(S, x);
				post.data[++post.len] = x;
			}
			Push(S, c);
			break;
		default:
			while (c >= '0' && c <= '9') {
				post.data[++post.len] = c;
			}
		}

	}

	while (!StatckEmpty(S)) {
		Pop(S, x);
		post.data[++post.len] = x;
	}
	//post.data[++post.len] = '\0';

	for (int i = 0; i < post.len; i++) {
		printf("%c", post.data[i]);
	}
}



/***********************************************************************************************/



/*ջ�п�*/
bool StatckEmpty(MyStatck S) {
	return S.top == -1;
}

/*�����Ƿ���*/
bool StatckFull(MyStatck S) {
	return S.top == MaxSize - 1;
}


/*��ջ*/
void Pop(MyStatck &S, char& x) {
	if(!StatckEmpty(S)) x = S.data[S.top--];
}

/*��ջ*/
void Push(MyStatck &S, char x) {
	if (!StatckFull(S)) S.data[++S.top] = x;
}


/*��ȡջ��Ԫ��*/
char Top(MyStatck S) {
	if (!StatckEmpty(S)) return S.data[S.top];
}