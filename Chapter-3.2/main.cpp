#include "stdafx.h"
#include "comm.h"
#define length 6
#define limit 100
int arr[length];
SqQueue SQ;
LinkQueue LQ;
// = {5,5,5,5,5,5,5}

//函数声明
//void test_232();


int main() {
	randMy(arr, length, limit);
	printArray(arr, length);
	printf_s("******************上面是初始数组**********************************\n\n");
	InitSqQueue(SQ);
	InitLinkQueue(LQ);
	

	//test_232();
	
	

	
	return 0;
}



//test 2.3.2 invert SqQueue
void test_232() {
	SqStack SS;
	SS.top = -1;
	for (int i = 0; i < length; i++) {
		EnQueue(SQ, arr[i]);
	}
	printSqQueue(SQ);
	invertSqQueue(SS, SQ);
	printSqQueue(SQ);
}