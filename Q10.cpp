
#include <stdio.h>
int main() {
  int n,i,z;
  printf("Enter an integer: ");
  scanf("%d",&n);
  for (i=1;i<=10;i++)
    {
        z=n*i;
        printf("%d\n",z);
  }
  return 0;
}
