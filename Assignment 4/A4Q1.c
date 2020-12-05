//Write a C program to print all-natural numbers between 1 to n using function.
#include <stdio.h>

void natnum(int n)
{int i;
for(i=1;i<=n;i++)
printf("%d ",i);
}

void main()
{int n;
printf("Enter the number till you want natural numbers:");
scanf("%d",&n);
printf("\nNatural numbers till %d are:",n);
natnum(n);
}