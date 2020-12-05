//Write a C program to check whether a number is palindrome or not using recursion.
#include<stdio.h>

int reverse(int n,int num)
{int r;
r=n%10;
num=num*10 +r;
n/=10;

if(n>0)
reverse(n,num);

else
return num;
}

void main()
{int n,num=0,orignum;
printf("Enter a number:");
scanf("%d",&n);
orignum=n;
if(orignum==reverse(n,num))
printf("\nIt is a palindrome");
else
printf("\nNot a palindrome");
}