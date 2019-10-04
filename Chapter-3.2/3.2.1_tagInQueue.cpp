#include "stdafx.h"

/********************����2019��chapter-3.2 ��Ӧ�����1�⣨P37��********************************
1����Ŀ��
	���ϣ��ѭ�������е�Ԫ�ض��ܵõ����ã���������һ����־��tag������tag��ֵΪ0��1�����ֶ�ͷָ��front�Ͷ�βָ��rear��ͬʱ�Ķ���״̬�ǡ��ա����ǡ�������
	�Ա�д��˽ṹ��Ӧ����Ӻͳ����㷨��
2���㷨˼�룺
1�㣺��ѭ�����е����ͽṹ�У�����һ��tag�����ͱ���������ʱ��tagΪ1������ʱ��agΪ0����Ϊֻ����Ӳ������ܵ��¶�����Ҳֻ�г��Ӳ������ܵ��¶ӿգ���
	����Q��ʼʱ����tag=0��front=rear=0���������е�4Ҫ�����£�
	
	�ӿ�������Q.front == Q.rear && Q.tag == 0;
	����������Q.front == Q.rear && Q.tag == 1;
	���Ӳ�����Q.data[Q.rear] = x; Q.rear = (Q.rear+1)%MaxSize; Q.tag = 1;
	���Ӳ�����x = Q.data[Q.front]; Q.front = (Q.front+1)%MaxSize; Q.tag = 0;
**********************************************************************************************/

/*���Ӳ���*/
void EnQueue(SqQueue_1 S1, ElemType x) {
	//�ж��Ƿ����
	if (S1.front == S1.rear && S1.tag == 1) {
		printf("The SqQueue_1 is FUll!!!\n");
		return;
	}else {
		S1.data[S1.rear] = x;
		S1.rear = (S1.rear + 1) % MaxSize;
		S1.tag = 1;
	}
}

/*���Ӳ���*/
void DeQueue(SqQueue_1 S1, ElemType &e) {
	//�ж�ʯ��ӿ�
	if (S1.front == S1.rear && S1.tag == 0) {
		printf("The SqQueue_1 is NUll!!!\n");
		return;
	}else {
		e = S1.data[S1.front];
		S1.front = (S1.front + 1) % MaxSize;
		S1.tag = 0;
	}
}