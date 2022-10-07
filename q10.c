// prime factors of a given number
#include <stdio.h>
void prime_fact(int);
int main ()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    prime_fact(n);
    
    
    return 0;
}

void prime_fact(int n)
{
    int i=2;
    while (n!=1)
    {
        if (n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        
        else 
        i++;
        
    }
}