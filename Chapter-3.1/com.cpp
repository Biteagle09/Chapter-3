#include "stdafx.h"
#define random(x) (rand()%x)


//Product many random number
//param arr[] ： saving these random number in this arr[]
//param count :  The total number of random Numbers
//param limit :  The upper limit of these random Numbers
void randMy(int arr[], int count, int limit) {
	srand((int)time(0));
	for (int x = 0; x < count; x++) {
		arr[x] = random(limit);
	}
}



//生成一个从start开始长度为count的连续递增有序数组，
void increasingList(int arr[], int count, int maxNumber) {
	srand((int)time(0));
	int end = random(maxNumber);
	int start = end - count;
	for (int i = start, j = 0; i < end; i++) {
		arr[j++] = i;
	}
}


//从头至尾打印int型数组里的内容
void printArray(int arr[], int len) {
	printf("int Array[%d]={", len);
	for (int i = 0; i < len; i++) {
		if (i < len - 1) {
			printf("%d,", arr[i]);
		}
		else {
			printf("%d}\n", arr[i]);
		}
	}
}




//对数组里面的内容进行排序
void quickSort(int arr[], int low, int high) {
	int temp, i = low, j = high;
	if (low < high) {
		temp = arr[low];
		while (i < j) {
			while (j > i && arr[j] > temp) {
				j--;
			}
			if (i < j) {
				arr[i++] = arr[j];
			}

			while (i < j && arr[i] < temp) {
				i++;
			}
			if (i < j) {
				arr[j--] = arr[i];
			}
		}
		arr[i] = temp;
		quickSort(arr, low, i - 1);
		quickSort(arr, i + 1, high);
	}
}



//从栈顶至栈底打印栈（顺序栈）内的元素
void printSqStack(SqStack S) {
	if (S.top == -1) {
		printf_s("NULL\n");
		return;
	}
	int len = S.top + 1;
	int i = S.top;
	for (i; i > 0; i--) {
		printf_s("%d<=", S.data[i]);
	}
	printf_s("%d\n", S.data[i]);
}

//从栈顶至栈底打印栈（链式栈）内的元素
void printLinkStack(LinkStack LS) {
	if (!LS) {
		printf_s("NULL\n");
		return;
	}
	LSNode* p = LS;
	while (p->next) {
		printf_s("%d<=", p->data);
		p = p->next;
	}
	printf_s("%d\n", p->data);
}