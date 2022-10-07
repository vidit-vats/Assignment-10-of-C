#include <stdio.h>
float area_of_circle(float);
int main (int argc, char *argv[]) {
 float rad,area;
 printf("Enter the radius: ");
 scanf("%f",&rad);
 area=area_of_circle(rad);
 printf("Area: %.3f\n",area);
    return 0;
}

float area_of_circle(float x)
{
    return (3.14*x*x);
}