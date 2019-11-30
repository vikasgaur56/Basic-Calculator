#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
    int number1, number2, n;
    printf("enter two number you want to operate on");
    scanf("%d\n%d", &number1, &number2);
    printf("enter 1 to add\n enter 2 to subtract\n enter 3 to multiply\n enter 4 to divide\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("%d\n", add(number1, number2));
        break;
    case 2:
        printf("%d\n", sub(number1, number2));
        break;
    case 3:
        printf("%d\n", mul(number1, number2));
        break;
    case 4:
        printf("%d\n", div(number1, number2));
        break;
    default:
        printf("enter correct choice");
        break;
    }
    return 10;
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}
