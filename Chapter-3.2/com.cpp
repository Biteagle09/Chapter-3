#include "stdafx.h"
#define random(x) (rand()%x)


//Product many random number
//param arr[] �� saving these random number in this arr[]
//param count :  The total number of random Numbers
//param limit :  The upper limit of these random Numbers
void randMy(int arr[], int count, int limit) {
	srand((int)time(0));
	for (int x = 0; x < count; x++) {
		arr[x] = random(limit);
	}
}



//����һ����start��ʼ����Ϊcount�����������������飬
void increasingList(int arr[], int count, int maxNumber) {
	srand((int)time(0));
	int end = random(maxNumber);
	int start = end - count;
	for (int i = start, j = 0; i < end; i++) {
		arr[j++] = i;
	}
}


//��ͷ��β��ӡint�������������
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




//��������������ݽ�������
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



//��ӡ���У�˳���-ѭ�����У����Ԫ�أ��Ӷ�ͷ����β��
void printSqQueue(SqQueue SQ) {
	if (SQ.front == SQ.rear) {
		printf("The SqQueue is null!!!\n");
		return;
	}else {
		int i = SQ.front;
		int j = SQ.rear;
		for (i; i < j - 1; i++) {
			printf("%d--",SQ.data[i]);
		}
		printf("%d\n", SQ.data[j-1]);
	}
}



//��ӡ���У���ʽ�ӣ����Ԫ�أ��Ӷ�ͷ����β��
void printLinkQueue(LinkQueue LQ) {

}