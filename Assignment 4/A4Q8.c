//Write a C program to generate nth Fibonacci term using recursion.
#include <stdio.h>

int fibonacci(int n,int first, int second, int third)
{third=first+second;
 first=second;
 second=third;
if(third<n)
 {printf("%d ",third);
 fibonacci(n,first,second,third);}
return (n,first,second,third);
}

void main()
{ int first=0, second=1,third, n;
printf("Enter the number till you want the series:");
scanf("%d",&n);
printf("\n%d %d ",first,second);
fibonacci(n,first,second,third);	
}