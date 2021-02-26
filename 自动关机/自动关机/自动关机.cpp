#include<stdio.h>
#include<windows.h>
int main(void)
{
 system("shutdown -f -s -t 100");
 Sleep(5000);
 system("shutdown -a");
 return 0;
}