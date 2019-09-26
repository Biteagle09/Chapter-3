#include "stdafx.h"

/********************����2019��chapter-3.1 ��Ӧ�����3�⣨P37��********************************
1����Ŀ��
	������I��O�ֱ��ʾ��ջ�ͳ�ջ������ջ�ĳ�̬����̬��Ϊ�գ���ջ�ͳ�ջ�Ĳ������пɱ�ʾΪ����I��O��ɵ����У����Բ��������г�Ϊ�Ϸ����У������Ϊ�Ƿ����С�
		(1��������ʾ����������Щ�ǺϷ��ģ�
			A.IOIIOIOO			B.IOOIOIIO			C.IIIOIOIO			D.IIIOOIOO
		(2��ͨ����(1���ķ�����д��һ���㷨���ж������Ĳ��������Ƿ�Ϸ������Ϸ�������true�����򷵻�false���ٶ����ж��Ĳ��������Ѵ���һά�����У���
2���㷨˼�룺  
1�㣺��p��ͷ��βɨ�赥����preָ��p����ǰ����
2�㣺��p��ָ����ֵΪx����ɾ��������p������һ����㣻
3�㣺������pre��pָ��ͬ������һ����㡣��
**********************************************************************************************/
bool JudgeSeriesIsTrue_1(char ch[]) {
	int sum = 0;
	int i = 0;
	while (ch[i] != '\0') {
		switch (ch[i]){
		 case 'I': 
			 sum++;
			 break;
		 case 'O' :
			 sum--;
			 if (sum < 0) return false;
			 break;
		}
		i++;
	}
	if (sum == 0) {
		return true;
	}else {
		return false;
	}
}






bool JudgeSeriesIsTrue_2(char ch[]) {
	int i = 0;
	int j = 0;
	int k = 0;
	while (ch[i] != '\0') {
		switch (ch[i]) {
			case 'I':
				j++;
				break;
			case 'O':
				k++;
				if (k > j) return false;
				break;
		}
		i++;
	}
	if (j != k) {
		return false;
	}else {
		return true;
	}
}