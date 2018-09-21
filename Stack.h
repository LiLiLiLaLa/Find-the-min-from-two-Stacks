#pragma once
#include <stdio.h>
#include <malloc.h>
#include <assert.h>

typedef int DataType;

typedef struct Stack
{
	DataType* _a;
	int _top;		// 栈顶
	int _capacity;  // 容量 
}Stack;

void StackInit(Stack* ps);//初始化栈
void StackDestory(Stack* ps);//销毁栈
void StackPush(Stack* ps, DataType x);//放入元素
void StackPop(Stack* ps);//弹出元素
DataType StackTop(const Stack* ps);//查找栈顶的元素（即将被弹出的元素）
int StackEmpty(const Stack* ps);//判断栈是否为空
int StackSize(const Stack* ps);//返回栈中有多少个元素
void TestStack();

