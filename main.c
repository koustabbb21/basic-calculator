#include <stdio.h>

void sum();
void subt();
void mult();
void div();

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

void subt()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\n",a,b, a-b);
}

void mult()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\n",a,b, a*b);
}

void div()
{
    int a, b;
    printf("Enter two numbers(b>0): ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\n",a,b, a/b);
}