// BitMap.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;


#define INT_BITS sizeof(int)
#define SHIFT 5 // 2^5=32
#define MASK 0x1f // 2^5=32
#define MAX 1024*1024*1024 //max number
int bitmap[MAX / INT_BITS];
/*
* 设置第i位
* i >> SHIFT 相当于 i / (2 ^ SHIFT),
* i&MASK相当于mod操作 m mod n 运算
*/
void set(int i) {
	bitmap[i >> SHIFT] |= 1 << (i & MASK);
}
//获取第i位
int test(int i) {
	return bitmap[i >> SHIFT] & (1 << (i & MASK));
}
//清除第i位
int clear(int i) {
	return bitmap[i >> SHIFT] & ~(1 << (i & MASK));
}
int _tmain(int argc, _TCHAR* argv[])
{
	set(32);
	//for (int i = 0; i < 10;i++)
	{
		cout << test(32) << endl;

	}
	char ch[10];
	cin >> ch ;
	return 0;
}

