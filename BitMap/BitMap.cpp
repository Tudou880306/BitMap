// BitMap.cpp : �������̨Ӧ�ó������ڵ㡣
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
* ���õ�iλ
* i >> SHIFT �൱�� i / (2 ^ SHIFT),
* i&MASK�൱��mod���� m mod n ����
*/
void set(int i) {
	bitmap[i >> SHIFT] |= 1 << (i & MASK);
}
//��ȡ��iλ
int test(int i) {
	return bitmap[i >> SHIFT] & (1 << (i & MASK));
}
//�����iλ
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

