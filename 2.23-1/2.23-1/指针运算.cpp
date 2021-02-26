#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#define N_VALUES 5
int main()
{
float values[N_VALUES];
float *vp;
//指针+-整数；指针的关系运算
for (vp = &values[0]; vp < &values[N_VALUES];)
{
*vp++ = 0;
}
return 0;
}

int main()
{
int *p =NULL ;
//....
int a = 10;
p = &a;
if(p != NULL)
{
*p = 20;
}
return 0;
}