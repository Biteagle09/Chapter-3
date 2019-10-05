#include "stdafx.h"

bool QueueEmpty(SqQueue SQ);
bool QueueFull(SqQueue Q);
void DeQueue(SqQueue Q, int& x);
void EnQueue(SqQueue Q, int x);
/********************����2019��chapter-3.3 ��Ӧ�����1�⣨P88��********************************
1����Ŀ��
	ĳ�����ֶɿڣ������ɴ�ÿ������10��������������������Ϊ�ͳ���ͻ����࣬�϶ɴ������¹涨��
		ͬ�೵�ȵ����ϴ���                                                                      //����ʾ���ݽṹ�ö��С�
		�ͳ����ڻ����϶ɴ�����ÿ��4���ͳ������������һ�����������ȴ��ͳ�����4�������Ի������棻
		���޻����ȴ�������ͳ����ϴ��������һ���㷨ģ��ɿڹ���
2���㷨˼�룺
	1�㣺��������Q������±�Ϊ10��ǡ����ÿ���ضɵ��������
	2�㣺����ͳ��Ķ���ΪQ1�������Ķ���ΪQ2��
	3�㣺��Q1���㣬��ÿȡ4��Q1Ԫ�غ���ȡһ��Q2Ԫ�أ�ֱ��Q�ĳ���Ϊ10��
	4�㣺	��Q1�����㣬��ֱ����Q2���롣
**********************************************************************************************/

SqQueue q;      //�����ɴ��ضɶ���
SqQueue q1;     //�ͳ�����
SqQueue q2;     //��������
/*�����ɴ�ģ��*/
void ferryManagement() {
	int i = 0, j = 0;           // i�������ͳ��Ƿ���4�� ,j ��ʾ�ɴ��ϵ��ܳ�����
	int x;
	while (j < 10) {
		if (!QueueEmpty(q1) && i < 4) {   //�ͳ����в�����δ����4������������Ͽͳ�
			DeQueue(q1, x);
			EnQueue(q, x);       //�ͳ��϶ɴ�
			i++;
			j++;
		}else if (i == 4 && !QueueEmpty(q2)) {   //�ͳ�����4�����л������ϣ����ϻ���
			DeQueue(q2, x);
			EnQueue(q, x);        //�����̴�
			j++;
			i = 0;                //���Ͽͳ�������0
		}else if(j < 10 && QueueEmpty(q2)){              //�����޻����ȴ��������пͳ��ϴ�
			while (!QueueEmpty(q1)) {
				DeQueue(q1, x);
				EnQueue(q, x);
				j++;
			}
		}else {
			while (j < 10 && i < 4 && !QueueEmpty(q2)) {    //���ͳ�����4������ֱ���û������롣
				DeQueue(q2, x);
				EnQueue(q, x);
				i++;
				j++;
			}
			i = 0;
		}
	}
	if (QueueEmpty(q1) && QueueEmpty(q2)) {
		j = 11;          //ֱ���˳�
	}
}

bool QueueEmpty(SqQueue Q) {
	return Q.front == Q.rear;
}

bool QueueFull(SqQueue Q) {
	return Q.front == (Q.rear + 1) % MaxSize;
}


/*����*/
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