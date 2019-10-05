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
//void test_332();
//void test_333();
void test_334();
//void test_335();
//void test_336();

int main() {
	//randMy(arr, length, limit);
	//printArray(arr, length);
	printf_s("******************上面是初始数组**********************************\n\n");
	//InitSqQueue(SQ);
	//InitLinkQueue(LQ);
	

	//test_331();
	//test_332();
	//test_333();
	test_334();
	//test_335();
	//test_336();

	
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



//test 3.3.3 
void test_333() {
	int n = 5;
	double x = 5;
	double r = Pn(n,x);
	double r1 = Pn_recursion(n, x);
	printf_s("P(%d,%g)==%g\n", n, x, r);
	printf_s("Pn_recursion(%d,%g)==%g\n", n, x, r1);
}



//test 3.3.4 
void test_334() {

}




//test335 例题1 
void test_335() {
	//23 * 64 - 2 / +3 -                    ==4
	//23 * 64 - 2 / +38 * -2 -
	//57 - 8 + 3 / 9 + 22 * +5 /           ==3
	char ch[] = "57-8+3/9+22*+5/";
	int re = calcPostExpression(ch);
	int i = 0;
	printf("The post expression is : ");
	while (ch[i] != '\0') {
		printf("%c",ch[i++]);
	}
	printf_s("\nThe Result==%d\n",re);
}



//test336 例题2 
void test_336() {
	int n = 40;
	printf_s("The Fibonacci(%d) == ", n);
	long r = (long)fib(n);
	printf_s("%d\n",r);
}