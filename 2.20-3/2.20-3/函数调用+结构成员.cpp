#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int grt_max(int x,int y)
//{
//	return x>y?x:y;
//}
//int main()//�������ò�����
//{
//	int a=10;
//	int b=20;
//	//���ú�����ʱ��ģ������Ǻ������ò�����
//	int max=grt_max(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}

//����һ���ṹ������-struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];

};
int main()//�ṹ���Ա
{
	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
	struct Stu s1={"����",20,"2000030513"};
	struct Stu* ps=&s1;
	printf("%s\n",(*ps).name);
	printf("%s\n",(*ps).id);
	
	printf("%s\n",ps->name);
	printf("%s\n",ps->id);


	printf("%s\n",s1.name);//�˴���.���Ƿ��ʽṹ���Ա
	printf("%d\n",s1.age);
	printf("%s\n",s1.id);
	return 0;
}