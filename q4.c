#include <stdio.h>
void disp(int);
int main (int argc, char *argv[]) {
int n;
printf("Enter n: ");
scanf("%d",&n);

disp(n);
    return 0;
}

void disp(int x)
{
    int i;
    for (i=1;i<=x;i++)
    printf("%d ",i);
}