#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
double fun()//��������cos��x��-x=0�ĸ�
{
double x0,x1;
x1=0.0;
do
{
  x0=x1;
  x1=cos(x0);
}
   while(fabs(x0-x1)>=1e-6);
   return x1;
}
	
int main()
{printf("Root =%f\n",fun());
	return 0;
}


