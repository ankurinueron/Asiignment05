#include<stdio.h>   //printing odd intergers 'n' number of times
int main()
{
int x,y,n;
printf("Enter the value : ");
scanf("%d",&n);
for(x=1;x<=n;x++)
{
    if(x%2!=0)
        printf("%d\n",x);
}
return 0;
}
