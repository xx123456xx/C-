#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//演示实例
int main()
{
int n = 10;
char *pc = (char*)&n;
int *pi = &n;
printf("%p\n", &n);
printf("%p\n", pc);
printf("%p\n", pc+1);
printf("%p\n", pi);
printf("%p\n", pi+1);
return 0;
}
//演示实例-指针的解引用
#include <stdio.h>
int main()
{
int n = 0x11223344;
char *pc = (char *)&n;
int *pi = &n;
*pc = 0; //重点在调试的过程中观察内存的变化。
*pi = 0; //重点在调试的过程中观察内存的变化。
return 0;
}


//野指针
//指针未初始化
int main()
{
int *p;//局部变量指针未初始化，默认为随机值
*p = 20;
return 0;
}

//指针越界访问
int main()
{
int arr[10] = {0};
int *p = arr;
int i = 0;
for(i=0; i<=11; i++)
{
//当指针指向的范围超出数组arr的范围时，p就是野指针
*(p++) = i;
}
return 0;
}

//指针指向的空间释放
int* test()
{
	int a=10;
	return &a;
}

int main()
{
	int*p=test();
	*p=20;
	return 0;
}