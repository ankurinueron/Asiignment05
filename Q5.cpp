#include<stdio.h>   //printing 'n' odd integers in reverse order
int main()
{
int x,y,n;
printf("Enter the value :");
scanf("%d",&n);
for(x=n;x>=1;x--)
{
    if(x%2!=0)
    printf("%d\n",x);
}
return 0;
}
