#include <stdio.h>
int fact(int);
int main (int argc, char *argv[]) {
 int n,res;
 printf("Enter a number to find the factorial: ");
 scanf("%d",&n);

res=fact(n);
printf("Answer: %d\n",res);
    return 0;
}

int fact(int x)
{
    int f=1,i;
    for (i=1;i<=x;i++)
    f=f*i;
    return f;
}