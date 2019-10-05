#pragma once
#include "stdafx.h"

//some public function(ADT)
void randMy(int arr[], int count, int limit);
void increasingList(int arr[], int count, int start);
void printArray(int arr[], int len);
void quickSort(int arr[], int low, int high);
void printSqQueue(SqQueue SQ);
void printLinkQueue(LinkQueue LQ, int length);
void printSqStack(SqStack S);
void printLinkStack(LinkStack LS);
LNode* createLNode(ElemType data);
void InitSqQueue(SqQueue& SQ);
void InitLinkQueue(LinkQueue& LQ);
bool isEmpty(SqQueue SQ);
bool isEmpty(LinkQueue LQ);
void EnQueue(SqQueue& SQ, ElemType x);
void EnQueue(LinkQueue& LQ, ElemType x);
void DeQueue(SqQueue& SQ, ElemType& e);
void DeQueue(LinkQueue& LQ, ElemType& e);
ElemType GetHead(SqQueue SQ);
ElemType GetHead(LinkQueue LQ);

LSNode* createLSNode(int data);
LinkStack createLinkStack();
void InitSqStatck(SqStack& S);
void InitLinkStatck(LinkStack& LS);
bool SqStackIsEmpty(SqStack S);
bool LinkStackIsEmpty(LinkStack LS);
bool Push(SqStack& S, int x);
void Push(LinkStack& LS, int x);
bool Pop(SqStack& S, int& element);
bool Pop(LinkStack& LS, int& element);
bool Top(SqStack S, int& element);
bool Top(LinkStack LS, int& element);
void ClearSqStack(SqStack& S);
void ClearLinkStack(LinkStack& LS);



//algorithm function 
bool matchBracket(char* ch);             //题 3.3.1
int calculateAB(int a, char op, int b);   //题 3.3.1
void trainSchedule(char* train);          //题 3.3.2
double Pn(int n, double x);               //题 3.3.3
double Pn_recursion(int n, double x);     //题 3.3.3
int calcPostExpression(char ch[]);        //例题1
int fib(int n);                           //例题2
void infixToPost(char infix[]);  //例题3