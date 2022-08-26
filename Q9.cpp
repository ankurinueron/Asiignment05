#include<stdio.h>   //printing cube of 'n' natural number
int main()
{
int x,y,n;
printf("Enter the value :");
scanf("%d",&n);
for(x=1;x<=n;x++)
{
    y=(x*x*x);
    printf("%d\n",y);
}
return 0;
}
