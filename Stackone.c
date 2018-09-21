#include "Stackone.h"

void DoubleStackInit(DoubleStack* ds)
{
	assert(ds);
	StackInit(&(ds->st));
	NStackInit(&(ds->nst));
}

void DoubleStackDestory(DoubleStack* ds)
{
	assert(ds);
	StackDestory(&(ds->st));
	NStackDestory(&(ds->nst));
}

DataType DoubleStackTop(const DoubleStack* ds)
{
	assert(ds);
	if ((ds->st)._top == 0)
	{
		printf("��ջ\n");
		return -1;
	}
	return StackTop(&ds->st);
}

void DoubleStackPush(DoubleStack* ds, DataType x)
{
	SDataType s;
	SDataType ret;
	assert(ds);
	//��ṹ���ջ�п�
	if (NStackEmpty(&ds->nst) == 0)
	{
		s.count = 1;
		s.num = x;
		StackPush(&ds->st, x);
		NStackPush(&ds->nst, s);
	}
	else
	{
		StackPush(&ds->st, x);
		if (x < NStackTop(&ds->nst).num)
		{
			s.num = x;
			s.count = 1;
			NStackPush(&ds->nst, s);
		}
		else if (x == NStackTop(&ds->nst).num)
		{
			ret = NStackTop(&ds->nst);
			NStackPop(&ds->nst);
			ret.count += 1;
			NStackPush(&ds->nst, ret);
		}
	}
}
void DoubleStackPop(DoubleStack* ds)
{
	SDataType ret;
	assert(ds);
	//��ȡ�ṹ��ջ��ջ��Ԫ��
	ret = NStackTop(&ds->nst);
	if (ret.num == StackTop(&ds->st))//��Ⱦͽṹ�����-1���߳�ջ
	{
		if (ret.count == 1)
		{
			NStackPop(&ds->nst);
		}
		else
		{
			ret.count--;
			NStackPop(&ds->nst);
			NStackPush(&ds->nst, ret);
		}
	}
	StackPop(&ds->st);
}

int DoubleStackEmpty(const DoubleStack* ds)
{
	assert(ds);
	return StackEmpty(&ds->st);
}

int DoubleStackSize(const DoubleStack* ds)
{
	assert(ds);
	return StackSize(&ds->st);
}

int GetMinNum(const DoubleStack* ds)
{
	assert(ds);
	return (NStackTop(&ds->nst)).num;
}

void TestDoubleStack()
{
	int tmp = INT_MIN;
	DoubleStack ds;
	DoubleStackInit(&ds);
	/*DoubleStackPush(&ds, 1);
	DoubleStackPush(&ds, 2);*/
	DoubleStackPush(&ds, -1);
	DoubleStackPush(&ds, 1);
	DoubleStackPush(&ds, 4);
	DoubleStackPush(&ds, 0);
	DoubleStackPush(&ds, -3);
	DoubleStackPush(&ds, 1);
	/*DoubleStackPop(&ds);
	DoubleStackPop(&ds);
	DoubleStackPop(&ds);*/
	DoubleStackPop(&ds);
	tmp = GetMinNum(&ds);
	printf("��СֵΪ��%d\n", tmp);
	DoubleStackDestory(&ds);
}