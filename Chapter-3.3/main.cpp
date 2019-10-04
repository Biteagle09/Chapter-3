#include "stdafx.h"
#include "comm.h"
#define length 6
#define limit 100
int arr[length];
SqQueue SQ;
LinkQueue LQ;
// = {5,5,5,5,5,5,5}

//函数声明
//void test_331();
void test_332();


int main() {
	//randMy(arr, length, limit);
	//printArray(arr, length);
	printf_s("******************上面是初始数组**********************************\n\n");
	//InitSqQueue(SQ);
	//InitLinkQueue(LQ);
	

	//test_331();
	test_332();
	
	

	
	return 0;
}



//test 3.3.1 
void test_331() {
	char ch[] = {'{','{','(',')','[','(',')',']','}'};
	char* p = ch;
	bool flag = matchBracket(p);
	flag ? printf_s("True!!!\n") : printf_s("False!!!\n");
}




//test 3.3.2 
void test_332() {
	char ch[] = { 'H','S','H','S','S','S','H','H','H' };
	char* p = ch;
	trainSchedule(ch);
	int i = 0;
	while (ch[i] != '\0') {
		printf_s("%c<-->", ch[i++]);
	}
	printf_s("\n");
}