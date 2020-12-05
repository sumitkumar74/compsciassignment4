//Write a C program to find sum of digits of a given number using recursion.
#include <stdio.h>

int func(int n,int sum)
{int r;
r=n%10;
sum+=r;
n/=10;

if(n>0)
func(n,sum);

else
return sum;
}

void main()
{int n,sum=0;
printf("Enter a number:");
scanf("%d",&n);

printf("\nSum of digits:%d",func(n,sum));
}