#include <stdio.h>

void sum();

int main()
{
    char op;
    printf("Enter an operator(+,-,*,/) : ");
    scanf("%c", &op);

    if(op=='+')
    {
        sum();
    }
    return 0;
}

void sum()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\n",a,b, a+b);
}