#include "stdafx.h"
#include "comm.h"
#define length 6
#define limit 100
int arr[length];
// = {5,5,5,5,5,5,5}

//函数声明
//void test313();
//void test314();
//void test315();


int main() {
	randMy(arr, length, limit);
	printArray(arr, length);
	printf_s("******************上面是初始数组**********************************\n\n");

	//test313();
	//test314();
	//test315();
}



//题3.1.3 judge series is true
void test313() {
	//A.IOIIOIOO			B.IOOIOIIO			C.IIIOIOIO			D.IIIOOIOO
	char chA[] = "IOIIOIOO";
	char chB[] = "IOOIOIIO";
	char chC[] = "IIIOIOIO";
	char chD[] = "IOIIOIOO";
	char chE[] = "IOIIOOII";
	char chF[] = "IOIOOIOO";
	bool flag;

	flag = JudgeSeriesIsTrue_1(chA);
	if (flag) printf_s("The chA is True!!!\n");
	else printf_s("The chA is False!!!\n");

	flag = JudgeSeriesIsTrue_1(chB);
	if (flag) printf_s("The chB is True!!!\n");
	else printf_s("The chB is False!!!\n");

	flag = JudgeSeriesIsTrue_1(chC);
	if (flag) printf_s("The chC is True!!!\n");
	else printf_s("The chC is False!!!\n");

	flag = JudgeSeriesIsTrue_1(chD);
	if (flag) printf_s("The chD is True!!!\n");
	else printf_s("The chD is False!!!\n");

	flag = JudgeSeriesIsTrue_1(chE);
	if (flag) printf_s("The chE is True!!!\n");
	else printf_s("The chE is False!!!\n");

	flag = JudgeSeriesIsTrue_1(chF);
	if (flag) printf_s("The chF is True!!!\n");
	else printf_s("The chF is False!!!\n");
}




//题3.1.3 judge the series is center symmetry
void test314() {
	LinkStack LS = createLinkStack();
	InitLinkStatck(LS);
	for (int i = 0; i < length; i++) {
		Push(LS, arr[i]);
	}
	printLinkStack(LS);
	IsCenterSymmetry(LS, length) ? printf_s("It is a center symmetry!!!\n") : printf_s("It is not a center symmetry!!!\n");
}




/**
题3.1.5 operation the public space stack
**/
void test315() {
	Stk stk;
	stk.top[0] = -1;
	stk.top[1] = MaxSize;
	//入栈一些数据
	for (int i = 0; i < length; i++) {
		i % 2 == 0 ? StkPush(stk, 0, arr[i]) : StkPush(stk, 1, arr[i]);
	}

	//打印S1栈
	if (stk.top[0] == -1) {
		printf_s("栈已空\n");
		return;
	}else {
		int e = 0;
		printf_s("S1栈：");
		while (stk.top[0] > 0) {
			StkPop(stk, 0, e);
			printf_s("%d<=", e);
		}
		StkPop(stk, 0, e);
		printf_s("%d\n", e);
	}

	//if (stk.top[0] == -1) {
	//	printf_s("栈已空\n");
	//	return;
	//}else {
	//	int len = stk.top[0];
	//	int i = stk.top[0];
	//	printf_s("S1栈：");
	//	for (i; i > 0; i--) {
	//		printf_s("%d<=", stk.data[i]);
	//	}
	//	printf_s("%d\n", stk.data[i]);
	//}
	




	//打印S2栈
	if (stk.top[1] == MaxSize) {
		printf_s("栈已空\n");
		return;
	}else {
		int e = 0;
		printf_s("S2栈：");
		while (stk.top[1] < MaxSize-1) {
			StkPop(stk, 1, e);
			printf_s("%d<=", e);
		}
		StkPop(stk, 1, e);
		printf_s("%d\n", e);
	}

	//if (stk.top[1] == MaxSize) {
	//	printf_s("栈已空\n");
	//	return;
	//}else {
	//	int len = MaxSize;
	//	int j = stk.top[1];
	//	printf_s("S2栈：");
	//	for (j; j < len-1; j++) {
	//		printf_s("%d<=", stk.data[j]);
	//	}
	//	printf_s("%d\n", stk.data[j]);
	//}
}