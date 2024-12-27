#include <stdio.h>
int twoSum(int a, int b)
{
    return a + b;
}
int aSum(int a, int b)
{
    return a - b;
}
int bSum(int a, int b)
{
    return a * b;
}
int cSum(int a, int b)
{
    return a / b;
}
int main()
{

    int result;
    result = twoSum(7, 5);
    printf("%d\n", result);

    result = aSum(7, 5);
    printf("%d\n", result);

    result = bSum(7, 5);
    printf("%d\n", result);

    result = cSum(7, 5);
    printf("%d\n", result);
}

// eroor