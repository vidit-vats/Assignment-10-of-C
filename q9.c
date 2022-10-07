#include <stdio.h>
#include <stdbool.h>
int dig_check(int, int);
int main (int argc, char *argv[]) {
int no,dig;
bool res;
printf("Enter a number: ");
scanf("%d",&no);

printf("Enter a digit: ");
scanf("%d",&dig);

res=dig_check(no,dig);
if (res==1)
printf("Entered Digit is present in the Entered Number\n");

else
printf("Entered Digit is not present in the Entered Number\n");
    return 0;
}

int dig_check(int no, int dig)
{
    int dig1;
    while (no!=0)
    {
        dig1=no%10;
        if (dig1==dig)
        return 1;

        else
        no=no/10;
    }
}