//Write a C program to find LCM of two numbers using recursion using function.
#include <stdio.h>

int func(int i,int x,int y,int n)
{if(i%x==0 && i%y==0)
    {n=i; return n;}

func(++i,x,y,n);
}

void main()
{int i=1,x,y,n;
printf("Enter 2 numbers:");
scanf("%d %d",&x,&y);

printf("\nLCM of %d and %d is:%d ",x,y,func(i,x,y,n));
}