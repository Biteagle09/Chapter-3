#include "stdafx.h"
#include "comm.h"
#define length 7
#define limit 100
int arr[length];
// = {5,5,5,5,5,5,5}

//函数声明



int main() {
	randMy(arr, length, limit);
	printArray(arr, length);
	printf_s("******************上面是初始数组**********************************\n\n");

	SqQueue SQ;
	InitSqQueue(SQ);

	LinkQueue LQ;
	InitLinkQueue(LQ);
	
	for (int i = 0; i < length; i++) {
		EnQueue(SQ, arr[i]);
		EnQueue(LQ, arr[i]);
	}
	//printSqQueue(SQ);
	//printLinkQueue(LQ, length);
	printf("*************************上面是原始队列************************************************\n");

	int e = 0;
	for (int j = 0; j < length; j++) {
		DeQueue(LQ,e);
		printf_s("%d--", e);
	}
	printf_s("\n");
	printSqQueue(SQ);
	printLinkQueue(LQ,length);
	
	printf("GetHead[sq]==%d, GetHead[Link]==%d\n", GetHead(SQ),GetHead(LQ));

	
	return 0;
}



