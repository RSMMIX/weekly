#include <stdio.h>
int fact(int a)
{
    int product = 1;
    for (size_t i = 1; i <= a; i++)
    {
        product *= i;
    }
    return product;
}
int main()
{
    // จงเขียนฟังก์ชั่น factorial (Level 3)
    int a;
    scanf("%d",&a);
    printf("%d",fact(a));
    return 0;
}