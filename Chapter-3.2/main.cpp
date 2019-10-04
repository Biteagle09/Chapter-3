#include "stdafx.h"
#include "comm.h"
#define length 6
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

	for (int i = 0; i < length; i++) {
		EnQueue(SQ, arr[i]);
	}
	int e = 0;
	printSqQueue(SQ);
	printf("GetHead==%d\n",GetHead(SQ));

	
	return 0;
}



