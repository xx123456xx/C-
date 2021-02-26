#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int grt_max(int x,int y)
//{
//	return x>y?x:y;
//}
//int main()//函数调用操作符
//{
//	int a=10;
//	int b=20;
//	//调用函数的时候的（）就是函数调用操作符
//	int max=grt_max(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}

//创建一个结构体类型-struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];

};
int main()//结构体成员
{
	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
	struct Stu s1={"张三",20,"2000030513"};
	struct Stu* ps=&s1;
	printf("%s\n",(*ps).name);
	printf("%s\n",(*ps).id);
	
	printf("%s\n",ps->name);
	printf("%s\n",ps->id);


	printf("%s\n",s1.name);//此处的.就是访问结构体成员
	printf("%d\n",s1.age);
	printf("%s\n",s1.id);
	return 0;
}