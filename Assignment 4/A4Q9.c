//Write a C program to find GCD (HCF) of two numbers using recursion.
#include <stdio.h>

int func(int i,int x,int y,int n)
{if(x%i==0 && y%i==0)
      n=i;
if(i==x || i ==y)
return n;
func(++i,x,y,n);
}

void main()
{int i=1,x,y,n;
printf("Enter 2 numbers:");
scanf("%d %d",&x,&y);

printf("\nHCF of %d and %d is:%d ",x,y,func(i,x,y,n));
}