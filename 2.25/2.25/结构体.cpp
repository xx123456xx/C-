#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////����һ��ѧ����һЩ����
////����
////����
////�绰
////�Ա�
////struct �ṹ��ؼ��� stu-�ṹ���ǩ  struct stu-�ṹ������
////1.�����ṹ��ķ���
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[20];
//	char ses[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����
//int main()
//{
//	struct stu s;//����һ���ֲ�����
//	return 0;
//}
////2.�ڶ���
//typedef struct stu//typedef �Ѹ����͸���
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[20];
//	char ses[5];
//}Stu;///��������
//int main()
//{
//	//����һ���ֲ����� 
//	Stu s1={"����",20,"15874536987","��"};//��ʼ��
//	struct stu s2={"��Ӣ",25,"15874545987","Ů"};
//	return 0;
//}
//���ӽṹ��
//struct S 
//{
//int a;
//char c;
//char arr[20];
//double d;
//};
//struct T//�ṹ���а����ṹ��
//{
//	char ch[10];
//	struct S s;
//	char * pc;
//};
//
//int main()
//{
//	char arr[]="hello bit";
//	struct T t={"С����",{10,'a',"hello world",3.15},arr};
//	printf("%s\n",t.ch);
//	printf("%s\n",t.pc);
//	printf("%lf\n",t.s.d);
//	printf("%s\n",t.s.arr);
//	printf("%d\n",t.s.a);
//	return 0;
//}
//int main()//�������ͣ�arr�����������Ҳ��������Ԫ�صĵ�ַ�����Կ�����%p��%s����ʽ��ӡ
//{
//	char b='c';
//	char arr[]="hello bit";
//	char * pc;
//	char * pb;
//	pb=&b;
//	int a=10;
//	int * pa=&a;
//	pc=arr;
//	printf("%p\n",pc);
//	printf("%c\n",arr[1]);
//	printf("%c\n",b);
//}
//�ṹ�崫��:�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
typedef struct stu//typedef �Ѹ����͸���
{
	//��Ա����
	char name[20];
	short age;
	char tele[20];
	char sex[5];
}Stu;
void Printf1(Stu s)
{
	printf("name: %s\n",s.name);
	printf("age: %d\n",s.age);
	printf("tele: %s\n",s.tele);
	printf("sex: %s\n",s.sex);
}
void Printf2(Stu * s)
{
	printf("name: %s\n",s->name);
	printf("age: %d\n",s->age);
	printf("tele: %s\n",s->tele);
	printf("sex: %s\n",s->sex);
}

int main()
{
	Stu s={"����",18,"156496446615","Ů"};
	//��ӡ�ṹ�����ݺ���
	Printf1(s);//���ṹ��
	Printf2(&s);//���ṹ���ַ
}