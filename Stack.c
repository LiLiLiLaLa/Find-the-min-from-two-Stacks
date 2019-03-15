#include "Stack.h"
//typedef struct Stack
//{
//	DataType* _a;
//	int _top;		// 栈顶
//	int _capacity;  // 容量 
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
	//断言
	assert(ps);
	//判断栈是否已满
	if (ps->_top == ps->_capacity)
	{
		ps->_a = realloc(ps->_a, sizeof(DataType)*(ps->_capacity + 3));
		assert(ps->_a);//重新开辟内存失败会返回空指针
		ps->_capacity += 3;
	}
	//放入
	ps->_a[ps->_top] = x;
	ps->_top++;
}

void StackPop(Stack* ps)
{
	//断言
	assert(ps);
	//判空
	if (ps->_top == 0)
	{
		return;
	}
	//删除
	ps->_top--;
}

DataType StackTop(const Stack* ps)
{
	//断言
	assert(ps);
	//判空
	assert(ps->_top);
	//返回栈顶元素
	return ps->_a[ps->_top - 1];
}

int StackEmpty(const Stack* ps)
{
	//断言
	assert(ps);
	//判空
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
	//断言
	assert(ps);
	//返回栈中有多少元素
	return ps->_top;
}
