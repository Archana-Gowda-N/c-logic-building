#include<stdio.h>

int cube(int a)
{
    return a * a * a;
}

void greatest(int n, int m)
{
    if(n > m)
    {
        printf("%d is greater\n", n);
    }
    else
    {
        printf("%d is greater\n", m);
    }
}

int main()
{
    int volume;
    int n, m;

    volume = cube(10);
    printf("Cube = %d\n", volume);

    printf("Enter first number: ");
    scanf("%d", &n);

    printf("Enter second number: ");
    scanf("%d", &m);

    greatest(n, m);

    return 0;
}