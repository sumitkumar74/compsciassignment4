//Write a C program to print all even or odd numbers in given range using recursion.
#include <stdio.h>

int even(int l,int u)
{if(l%2==0)
printf("%d ",l);
if(l==u)
return 0;
else
even(++l,u);
}

int odd(int l,int u)
{if(l%2!=0)
printf("%d ",l);
if(l==u)
return 0;
else
odd(++l,u);
}

void main()
{int l,u;
printf("Enter lower limit:");
scanf("%d",&l);
printf("\nEnter upper limit:");
scanf("%d",&u);

printf("\nEven numbers:");even(l,u);
printf("\nOdd numbers:");odd(l,u);
}