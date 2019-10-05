#include "stdafx.h"

bool QueueEmpty(SqQueue SQ);
bool QueueFull(SqQueue Q);
void DeQueue(SqQueue Q, int& x);
void EnQueue(SqQueue Q, int x);
/********************王道2019年chapter-3.3 ，应用题第1题（P88）********************************
1、题目：
	某汽车轮渡口，过江渡船每次能载10辆车过江。过江车辆分为客车类和货车类，上渡船有如下规定：
		同类车先到先上船；                                                                      //【暗示数据结构用队列】
		客车先于货车上渡船，且每上4辆客车，才允许放上一辆货车；若等待客车不足4辆，则以货车代替；
		若无货车等待，允许客车都上船。试设计一个算法模拟渡口管理。
2、算法思想：
	1°：假设数组Q的最大下标为10，恰好是每次载渡的最大量；
	2°：假设客车的队列为Q1，货车的队列为Q2；
	3°：若Q1充足，则每取4个Q1元素后再取一个Q2元素，直到Q的长度为10；
	4°：	若Q1不充足，则直接用Q2补齐。
**********************************************************************************************/

SqQueue q;      //过江渡船载渡队列
SqQueue q1;     //客车队列
SqQueue q2;     //货车队列
/*过江渡船模拟*/
void ferryManagement() {
	int i = 0, j = 0;           // i来计数客车是否满4辆 ,j 表示渡船上的总车辆数
	int x;
	while (j < 10) {
		if (!QueueEmpty(q1) && i < 4) {   //客车队列不空且未上足4辆车，则继续上客车
			DeQueue(q1, x);
			EnQueue(q, x);       //客车上渡船
			i++;
			j++;
		}else if (i == 4 && !QueueEmpty(q2)) {   //客车已足4辆且有货车可上，则上货车
			DeQueue(q2, x);
			EnQueue(q, x);        //货车商船
			j++;
			i = 0;                //船上客车计数置0
		}else if(j < 10 && QueueEmpty(q2)){              //若车无货车等待，则将所有客车上船
			while (!QueueEmpty(q1)) {
				DeQueue(q1, x);
				EnQueue(q, x);
				j++;
			}
		}else {
			while (j < 10 && i < 4 && !QueueEmpty(q2)) {    //若客车不足4辆，则直接用货车补齐。
				DeQueue(q2, x);
				EnQueue(q, x);
				i++;
				j++;
			}
			i = 0;
		}
	}
	if (QueueEmpty(q1) && QueueEmpty(q2)) {
		j = 11;          //直接退出
	}
}

bool QueueEmpty(SqQueue Q) {
	return Q.front == Q.rear;
}

bool QueueFull(SqQueue Q) {
	return Q.front == (Q.rear + 1) % MaxSize;
}


/*出队*/
void DeQueue(SqQueue Q, int &x) {
	if (!QueueEmpty(Q)) {
		x = Q.data[Q.front];
		Q.front = (Q.front + 1) % MaxSize;
	}else {
		return;
	}
}

void EnQueue(SqQueue Q, int x) {
	if (!QueueFull(Q)) {
		Q.data[Q.rear] = x;
		Q.rear = (Q.rear + 1) % MaxSize;
	}else {
		return;
	}
}