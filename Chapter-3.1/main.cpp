#include "stdafx.h"
#include "comm.h"
#define length 7
#define limit 100
int arr[length]= {1,7,5,6,5,7,1};
// 

//函数声明
//void test313();
void test314();



int main() {
	//randMy(arr, length, limit);
	printArray(arr, length);
	printf_s("******************上面是初始数组**********************************\n\n");

	//test313();
	test314();
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