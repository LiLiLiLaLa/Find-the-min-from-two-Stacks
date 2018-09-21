#include "Stacktwo.h"

void NStackInit(NStack* ps)
{
	ps->_a = (SDataType*)malloc(sizeof(SDataType)*START_SIZE);
	ps->_capacity = START_SIZE;
	ps->_top = 0;
}

void NStackDestory(NStack* ps)
{
	assert(ps);
	if (ps->_a == NULL)
		return;
	free(ps->_a);
	ps->_a = NULL;
}

void NStackPush(NStack* ps, SDataType x)
{
	assert(ps);
	//判断是否需要扩容
	if (ps->_capacity == ps->_top)
	{
		ps->_a = realloc(ps->_a, sizeof(SDataType)*(ps->_capacity + ADD_SIZE));
		ps->_capacity += ADD_SIZE;
		assert(ps->_a);
	}
	ps->_a[ps->_top++] = x;
}

void NStackPop(NStack* ps)
{
	assert(ps);
	if (ps->_top == 0)
		return;
	ps->_top--;
}

SDataType NStackTop(const NStack* ps)
{
	Statistics s;
	s.count = -1;
	s.num = -1;
	assert(ps);
	assert(ps->_top != 0);
	if (ps->_top == 0)
		return s;
	return ps->_a[ps->_top - 1];
}

int NStackEmpty(const NStack* ps)
{
	assert(ps);
	return ps->_top == 0 ? 0 : 1;//0为空、1为非空
}

//获取栈中元素个数
int NStackSize(const NStack* ps)
{
	assert(ps);
	return ps->_top;
}