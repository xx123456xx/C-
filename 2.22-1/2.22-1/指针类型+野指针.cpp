#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ʾʵ��
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
//��ʾʵ��-ָ��Ľ�����
#include <stdio.h>
int main()
{
int n = 0x11223344;
char *pc = (char *)&n;
int *pi = &n;
*pc = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
*pi = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
return 0;
}


//Ұָ��
//ָ��δ��ʼ��
int main()
{
int *p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
*p = 20;
return 0;
}

//ָ��Խ�����
int main()
{
int arr[10] = {0};
int *p = arr;
int i = 0;
for(i=0; i<=11; i++)
{
//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
*(p++) = i;
}
return 0;
}

//ָ��ָ��Ŀռ��ͷ�
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