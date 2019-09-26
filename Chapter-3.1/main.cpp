#include "stdafx.h"
#include "comm.h"
#define length 9
#define limit 100
int arr[length];
// = {1,3,4,2,7,5,9,0}

int main() {
	randMy(arr, length, limit);
	printArray(arr, length);
	printf_s("******************�����ǳ�ʼ����**********************************\n\n");
	SqStack S;
	InitSqStatck(S);
	for (int i = 0; i < length; i++) {
		Push(S, arr[i]);
	}
	printSqStack(S);
	printf_s("******************������˳��ջ����������ʽջ**********************************\n");
	LinkStack LS = createLinkStack();
	for (int i = 0; i < length; i++) {
		Push(LS, arr[i]);
	}
	printLinkStack(LS);
	return 0;
}