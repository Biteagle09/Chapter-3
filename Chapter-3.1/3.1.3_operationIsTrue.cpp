#include "stdafx.h"

/********************王道2019年chapter-3.1 ，应用题第3题（P37）********************************
1、题目：
	假设以I和O分别表示入栈和出栈操作。栈的初态和终态均为空，入栈和出栈的操作序列可表示为仅由I和O组成的序列，可以操作的序列称为合法序列，否则称为非法序列。
		(1）下面所示的序列中哪些是合法的？
			A.IOIIOIOO			B.IOOIOIIO			C.IIIOIOIO			D.IIIOOIOO
		(2）通过对(1）的分析，写出一个算法，判定所给的操作序列是否合法。若合法，返回true，否则返回false（假定被判定的操作序列已存入一维数组中）。
2、算法思想：  
1°：用i作为遍历指针来遍历整个字符数组，遇到‘I’，sum加1，遇到‘O’，sum减1；
2°：sum表示当前节点及以前的所有操作的和，在减操作，也就是遇到‘O’时，要判断此时的sum是否小于0，若小于0，则表示序列不合法；
3°：最后判断sum的值，只有其值为0时，才是正确的序列，否则，即为不合法；
**********************************************************************************************/
bool JudgeSeriesIsTrue_1(char ch[]) {
	int sum = 0;
	int i = 0;
	while (ch[i] != '\0') {
		switch (ch[i]){
		 case 'I': 
			 sum++;
			 break;
		 case 'O' :
			 sum--;
			 if (sum < 0) return false;
			 break;
		}
		i++;
	}
	if (sum == 0) {
		return true;
	}else {
		return false;
	}
}




/***********************************************************************************************************
2、算法思想：
1°：用i作为遍历指针来遍历整个字符数组，遇到‘I’，j表示遇到‘O’，k表示遇到‘I’；
2°：在减操作，也就是遇到‘O’时，要判断此时的j是否小于k，若大于k，则表示序列不合法；
3°：最后判断j和k的值，只有j==k时，才是正确的序列，否则，即为不合法；
**********************************************************************************************************/
bool JudgeSeriesIsTrue_2(char ch[]) {
	int i = 0;
	int j = 0;
	int k = 0;
	while (ch[i] != '\0') {
		switch (ch[i]) {
			case 'I':
				j++;
				break;
			case 'O':
				k++;
				if (k > j) return false;
				break;
		}
		i++;
	}
	if (j != k) {
		return false;
	}else {
		return true;
	}
}