#include "Stacktwo.h"
#include "Stack.h"

typedef struct DoubleStack {
	Stack st;//�����ݵ�ջ
	NStack nst;//��ṹ���ջ
}DoubleStack;

void DoubleStackInit(DoubleStack* ds);//��ʼ��
void DoubleStackDestory(DoubleStack* ds);//����
void DoubleStackPush(DoubleStack* ds, DataType x);//��
void DoubleStackPop(DoubleStack* ds);//��
DataType DoubleStackTop(const DoubleStack* ds);//ջ��Ԫ��
int DoubleStackEmpty(const DoubleStack* ds);//�п�
int DoubleStackSize(const DoubleStack* ds);//����Ԫ�ض���
int GetMinNum(const DoubleStack* ds);//ȡ�õ�ǰ��Сֵ

void TestDoubleStack();