//Write a C program to find sum of all even or odd numbers in given range using recursion
#include <stdio.h>

int even(int l,int u,int sum)
{if(l%2==0)
sum+=l;
if(l==u)
return sum;
else
even(++l,u,sum);
}

int odd(int l,int u,int sum)
{if(l%2!=0)
sum+=l;
if(l==u)
return sum;
else
odd(++l,u,sum);
}

void main()
{int l,u,sum=0;
printf("Enter lower limit:");
scanf("%d",&l);
printf("\nEnter upper limit:");
scanf("%d",&u);

printf("\nSum of even numbers:%d",even(l,u,sum));
sum=0;
printf("\nSum of odd numbers:%d",odd(l,u,sum));
}