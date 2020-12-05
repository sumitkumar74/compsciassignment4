//Write a C program to find reverse of any number using recursion.
#include<stdio.h>

int reverse(int n,int num)
{int r;
r=n%10;
num=num*10 +r;
n/=10;
if(n>0)
reverse(n,num);
else 
return num;}

void main()
{int n,num=0;
printf("Enter a number:");
scanf("%d",&n);
printf("\nReverse number:%d",reverse(n,num));
} 