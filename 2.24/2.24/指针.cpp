#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//三、野指针
//int main()
//{
//	int arr[10]={0,2,2,3,4,5,6,7,8,8,};
//	int i=0;
//	int* pa=arr;
//	printf("%d\n",*(pa+1));
//	for(i=0;i<12;i++)
//	{
//		printf("%d\n",(*(pa+i)));//此处出现了野指针，指针越界访问
//	}
//	return 0;
//}
//四、指针运算
//1.指针+-整数
//int main()
//{
//	int arr[10]={0,1,2,3,45,65,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	int *p=arr;//arr就是数组第一个元素的地址
//	//for(i=0;i<10;i++)
//	//{
//	//	printf("%d ",*p);
//	//	p=p+1;
//	//}
//	for(i=0;i<4;i++)
//	{
//		printf("%d ",*p);
//		p+=2;//p=p+2;
//	}
//	return 0;
//}
//2.指针-指针
//int main()
//{
//	int arr[10]={0,1,2,3,45,65,7,8,9,10};
//	printf("%d\n",&arr[9]-&arr[0]);//指针-指针的结果是指针之间元素的个数
//	return 0;
//}
//int my_strlen(char* arr)//strlen的模拟运算
//{
//	char* start=arr;
//	char* end=arr;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()//strlen的模拟运算
//{
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//3.指针的关系运算
//int main()
//{
//	int arr[10]={0,1,2,3,45,65,7,8,9,10};
//	int* vp=arr;
//	int i=0;
//	for(vp=&arr[10];vp>&arr[0];)//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
//		                       //但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。             
//	{
//	vp=(vp-1);
//		*vp=0;
//		/**--vp=0;*/
//	}
//	for(vp==&arr[9];vp>=&arr[0];vp--)
//	{
//		*--vp=0;
//	}
//
//	int *p=arr;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*p);
//		p=p+1;
//	}
//	return 0;
//}
//五、指针和数组
//int main()
//{
//	int arr[10]={0};
//	int *p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		printf("%p  ========  %p\n",p+i,&arr[i]);
//	}
//	return 0;
//}
//六、二级指针
//int main()
//{
//	int a=10;
//	int* pa=&a;
//	int* *ppa=&pa;//ppa就是二级指针
//	**ppa=20;
//	printf("%d\n",**ppa);
//	printf("%d\n",a);
//	return 0;
//}
//七、指针数组
int main()
{
	int a=20;
	int b=30;
	int c=40;
	int * pa=&a;
	int * pb=&b;
	int * pc=&c;
	int * arr[3]={pa,pb,pc};
	int i=0;
	for(i=0;i<3;i++)
		printf("%d\n",*(arr[i]));
	return 0;
}
