#ifndef __STACKTWO_H__
#define __STACKTWO_H__

#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdlib.h>

#define START_SIZE 4
#define ADD_SIZE 3

typedef struct Statistics{
	int num;//����
	int count;//���ִ���
}Statistics;//����Сֵ����Сֵ���ִ���������һ���ṹ��

typedef Statistics SDataType;

typedef struct NStack
{
	SDataType* _a;//ָ������Сֵ�ͳ��ִ����Ľṹ��
	int _top;//ջ��
	int _capacity;//���� 
}NStack;//��ṹ���ջ

void NStackInit(NStack* ps);//��ʼ��
void NStackDestory(NStack* ps);//����
void NStackPush(NStack* ps, SDataType x);//��
void NStackPop(NStack* ps);//��
SDataType NStackTop(const NStack* ps);//ջ��
int NStackEmpty(const NStack* ps);//�п�
int NStackSize(const NStack* ps);//Ԫ����

#endif // !__STACKTWO_H__

