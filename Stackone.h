#include "Stacktwo.h"
#include "Stack.h"


typedef struct DoubleStack {
	Stack st;//存数据的栈
	NStack nst;//存结构体的栈
}DoubleStack;

void DoubleStackInit(DoubleStack* ds);//初始化
void DoubleStackDestory(DoubleStack* ds);//销毁
void DoubleStackPush(DoubleStack* ds, DataType x);//入
void DoubleStackPop(DoubleStack* ds);//出
DataType DoubleStackTop(const DoubleStack* ds);//栈顶元素
int DoubleStackEmpty(const DoubleStack* ds);//判空
int DoubleStackSize(const DoubleStack* ds);//存入元素多少
int GetMinNum(const DoubleStack* ds);//取得当前最小值

void TestDoubleStack();
