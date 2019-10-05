#include "stdafx.h"

char Top(MyStatck S);
bool StatckEmpty(MyStatck S);
bool StatckFull(MyStatck S);
void Pop(MyStatck &S, char& x);
void Push(MyStatck& S, char x);

/********************王道2019年chapter-3.3 ，例题第3题（p83）********************************
1、题目：
	中缀表达式转后缀表达式。
2、算法思想：
	1:遍历整个中缀表达式；
	2:若果遇到左侧括号，则直接入栈；
	3:若遇到右括号则从栈一直弹出元素，直到弹出与当前右括号匹配的左括号
	4:若遇到 ‘+’ or ‘-’，则直接出栈；
	5:若遇到 ‘*’ or ‘÷’，则一直出栈直到‘+’ or ‘-’字符；
	6:若遇到数字，则
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



/*栈判空*/
bool StatckEmpty(MyStatck S) {
	return S.top == -1;
}

/*队列是否满*/
bool StatckFull(MyStatck S) {
	return S.top == MaxSize - 1;
}


/*出栈*/
void Pop(MyStatck &S, char& x) {
	if(!StatckEmpty(S)) x = S.data[S.top--];
}

/*入栈*/
void Push(MyStatck &S, char x) {
	if (!StatckFull(S)) S.data[++S.top] = x;
}


/*获取栈顶元素*/
char Top(MyStatck S) {
	if (!StatckEmpty(S)) return S.data[S.top];
}