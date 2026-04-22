# area of circle
#include<stdio.h>
int main
{
int r;
float circle;

printf("enter any positive integer");
scanf("%d",&r);
{
circle=2*3.142**r;
}
printf("%d",circle);
return 0;
}

# sum of two numbers
#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter first positive integer: ");
    scanf("%d", &a);

    printf("Enter second positive integer: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum = %d", sum);

    return 0;
}

# sum of n natural numbers
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter any positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}