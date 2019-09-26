#include "stdafx.h"
#include "comm.h"
#define length 5
#define limit 100
int arr[length];


int main() {
	randMy(arr, length, limit);
	printArray(arr, length);
	quickSort(arr, 0, length - 1);
	printArray(arr, length);

	return 0;
}