#ifndef __STACKTWO_H__
#define __STACKTWO_H__

#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdlib.h>

#define START_SIZE 4
#define ADD_SIZE 3

typedef struct Statistics{
	int num;//数字
	int count;//出现次数
}Statistics;//讲最小值和最小值出现次数定义在一个结构体

typedef Statistics SDataType;

typedef struct NStack
{
	SDataType* _a;//指向存放最小值和出现次数的结构体
	int _top;//栈顶
	int _capacity;//容量 
}NStack;//存结构体的栈

void NStackInit(NStack* ps);//初始化
void NStackDestory(NStack* ps);//销毁
void NStackPush(NStack* ps, SDataType x);//入
void NStackPop(NStack* ps);//出
SDataType NStackTop(const NStack* ps);//栈顶
int NStackEmpty(const NStack* ps);//判空
int NStackSize(const NStack* ps);//元素量

#endif // !__STACKTWO_H__

