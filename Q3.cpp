#include<stdio.h>   //printing 'n' natural numbers in reverse order
int main()
{
int x,y,n;
printf("Enter the value : ");
scanf("%d",&n);
for(x=n;x>=1;x--)
{
    printf("%d\n",x);

}
return 0;
}
