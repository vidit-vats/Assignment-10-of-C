#include <stdio.h>
int comb(int,int);
int main (int argc, char *argv[]) {
 int n,r,res;
 printf("Enter the value of n: ");
 scanf("%d",&n);
 printf("Enter the value of r: ");
 scanf("%d",&r);

 res=comb(n,r);
 printf("Result: %d\n",res);

    return 0;
}

int comb(int n,int r)
{
    int i,f1=1,f2=1,f3=1,res;
    for (i=1;i<=n;i++)
    f1=f1*i; // gives n factorial 

    i=1;
    for (i=1;i<=r;i++)
    f2=f2*i; // gives r factorial

    i=1;
    for (i=1;i<=n-r;i++)
    f3=f3*i; // gives n-r factorial

    res=f1/(f3*f2);
    return res;
}