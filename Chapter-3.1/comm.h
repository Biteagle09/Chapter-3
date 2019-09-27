#pragma once
#include "stdafx.h"

//some public function(ADT)
void randMy(int arr[], int count, int limit);
void increasingList(int arr[], int count, int start);
void printArray(int arr[], int len);
//void printCharArray(int ch[]);
void quickSort(int arr[], int low, int high);
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
void printSqStack(SqStack S);
void printLinkStack(LinkStack LS);



//algorithm function 
extern bool JudgeSeriesIsTrue_1(char ch[]);  //Ã‚3.1.3
extern bool JudgeSeriesIsTrue_2(char ch[]);  //Ã‚3.1.3
extern bool IsCenterSymmetry(LinkStack LS, int n);  //Ã‚3.1.4

