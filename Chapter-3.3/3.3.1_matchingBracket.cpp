#include "stdafx.h"

/********************王道2019年chapter-3.3 ，应用题第1题（P87）********************************
1、题目：
	假设一个算术表达式中包含圆括号、方括号和花括号3种类型的括号，编写一个算法来判别表达式中的括号是否配对，以字符“\0”作为算术表达式的结束符;
2、算法思想：
	1°：逐个遍历表达式字符序列；
	2°：若当前字符是左括号、左方括号、左花括号，则将其入栈；
	3°：若当前字符是右括号、右方括号、右花括号，则弹出栈顶元素，若与当前右侧同类型括号不匹配，则视为表达式匹配错误，返回false;
**********************************************************************************************/

/*匹配括号是否正确*/
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



