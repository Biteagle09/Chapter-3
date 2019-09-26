#include "stdafx.h"

/********************王道2019年chapter-3.1 ，应用题第3题（P37）********************************
1、题目：
	假设以I和O分别表示入栈和出栈操作。栈的初态和终态均为空，入栈和出栈的操作序列可表示为仅由I和O组成的序列，可以操作的序列称为合法序列，否则称为非法序列。
		(1）下面所示的序列中哪些是合法的？
			A.IOIIOIOO			B.IOOIOIIO			C.IIIOIOIO			D.IIIOOIOO
		(2）通过对(1）的分析，写出一个算法，判定所给的操作序列是否合法。若合法，返回true，否则返回false（假定被判定的操作序列已存入一维数组中）。
2、算法思想：  
1°：用p从头至尾扫描单链表，pre指向p结点的前驱；
2°：若p所指结点的值为x，则删除，并让p移向下一个结点；
3°：否则让pre、p指针同步后移一个结点。；
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