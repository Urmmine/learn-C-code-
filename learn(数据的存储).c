#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



//整型家族
//浮点型家族
//构造类型 - 自定义类型
//struct - 结构体类型
//arr - 数组类型
//枚举 enum
//联合体 union


//int main()
//{
//	int arr[10];//int [10]
//	int arr2[20];//int [5]
//	return 0;
//}


//指针类型
//空类型
//void
//函数返回类型，函数参数，指针


//int main()
//{
//	int a = -10;
//	//-10
//	//原码：10000000000000000000000000001010
//	//反码：11111111111111111111111111110101
//	//补码：11111111111111111111111111111110
//	//在内存中以补码形式存储
//	return 0;
//} 


//数据在内存中以二进制形式存储
//整数的二进制有三种表示形式：原码，反码
//正整数：原码反码补码相同
//负整数：原码反码补码要进行计算
//按数据的数值直接写出的二进制序列就是原码
//原码的符号位不变，其他位按位取反，就是反码
//反码+1就是补码
//整数在内存中存储的是补码


//大端字节序和小端字节序
//大端字节序：把数据的低位字节序的内容放在高地址处，高位字节序的内容放在低地址处
//小端字节序：把数据的低位字节序的内容放在低地址处，高位字节序的内容放在高地址处

//当前程序：小端存储模式

//int main()
//{
//	int a = 0x11223344;
//
//	return 0;
//}


//写代码判断当前机器的字节序

//int main()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		pritnf("大端\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 - 补码
//	//10000000
//	//11111111111111111111111110000000 - 整型提升
//
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}




//有符号char的取值范围：-128~127

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//
//	printf("%d\n", i + j);
//	return 0;
//}


//浮点数和整数在内存中存储的方式有区别！

//IEEE - 754标准 
//二进制浮点数表示为：(-1)^S * M * 2^E
//(-1)^S 符号位 s=0为正数，s=1为负数
//M表示有效数字，大于等于1，小于2
//2^E表示指数位



//对于float存储

//32个bits
//1bit表示S
//8bit表示E
//23bit表示M

//对于double储存

//64bit
//1bit表示S
//11bit表示E
//52bit表示M


int main()
{

	return 0;
}






