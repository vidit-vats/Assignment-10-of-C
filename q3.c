#include <stdio.h>
int no_check(int);
int main (int argc, char *argv[]) {
 int no,res;
 printf("Enter a number: ");
 scanf("%d",&no);

res=no_check(no);

if (res==1)
printf("Number is even\n");

else
printf("Number is odd\n");
    return 0;
}

int no_check(int x)
{
    if (x%2==0)
    return 1;

    else
    return 0;
}