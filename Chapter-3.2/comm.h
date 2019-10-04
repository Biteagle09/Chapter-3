#pragma once
#include "stdafx.h"

//some public function(ADT)
void randMy(int arr[], int count, int limit);
void increasingList(int arr[], int count, int start);
void printArray(int arr[], int len);
void quickSort(int arr[], int low, int high);
void printSqQueue(SqQueue SQ);
void printLinkQueue(LinkQueue LQ);
LNode* createLNode(ElemType data);
LinkQueue* createLinkQueue();
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



//algorithm function 

