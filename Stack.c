#include "Stack.h"

//typedef struct Stack
//{
//	DataType* _a;
//	int _top;		// Õ»¶¥
//	int _capacity;  // ÈÝÁ¿ 
//}Stack;

void StackInit(Stack* ps)
{
	assert(ps);
	ps->_a = (DataType*)malloc(sizeof(DataType)* 3);
	ps->_capacity = 3;
	ps->_top = 0;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}

void StackPush(Stack* ps, DataType x)
{
	//¶ÏÑÔ
	assert(ps);
	//ÅÐ¶ÏÕ»ÊÇ·ñÒÑÂú
	if (ps->_top == ps->_capacity)
	{
		ps->_a = realloc(ps->_a, sizeof(DataType)*(ps->_capacity + 3));
		assert(ps->_a);//ÖØÐÂ¿ª±ÙÄÚ´æÊ§°Ü»á·µ»Ø¿ÕÖ¸Õë
		ps->_capacity += 3;
	}
	//·ÅÈë
	ps->_a[ps->_top] = x;
	ps->_top++;
}

void StackPop(Stack* ps)
{
	//¶ÏÑÔ
	assert(ps);
	//ÅÐ¿Õ
	if (ps->_top == 0)
	{
		return;
	}
	//É¾³ý
	ps->_top--;
}

DataType StackTop(const Stack* ps)
{
	//¶ÏÑÔ
	assert(ps);
	//ÅÐ¿Õ
	assert(ps->_top);
	//·µ»ØÕ»¶¥ÔªËØ
	return ps->_a[ps->_top - 1];
}

int StackEmpty(const Stack* ps)
{
	//¶ÏÑÔ
	assert(ps);
	//ÅÐ¿Õ
	if (ps->_top == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int StackSize(const Stack* ps)
{
	//¶ÏÑÔ
	assert(ps);
	//·µ»ØÕ»ÖÐÓÐ¶àÉÙÔªËØ
	return ps->_top;
}