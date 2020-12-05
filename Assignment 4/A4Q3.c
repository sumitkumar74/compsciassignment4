//Write a C program to find sum of all-natural numbers between 1 to n using recursion.
#include <stdio.h>

int func(int n)
{
if(n==0)
return 0;
return n+func(n-1);
}

void main()
{int n;
printf("Enter the number:");
scanf("%d",&n);
printf("\nSum of natural numbers till %d is:%d ",n,func(n));
}