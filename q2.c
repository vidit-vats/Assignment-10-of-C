#include <stdio.h>
float SI(float,float,float);
int main (int argc, char *argv[]) {
 float p,r,t,res;
 printf("Enter the principal, rate and time: ");
 scanf("%f%f%f",&p,&r,&t);

 res=SI(p,r,t);
 printf("Simple Interest: Rs %.2f\n",res);
    return 0;
}

float SI(float x,float y,float z)
{
    return ((x*y*z)/100);

}