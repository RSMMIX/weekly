#include<stdio.h>
// การทำงานของฟังก์ชันนี้ รับค่าตัวเลข มาตรวจสอบว่าเป็นจำนวนเฉพาะ?
int isPrime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2 || n == 3)
    {
        return 1;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int n;
    scanf("%d",&n);
    if (isPrime(n))
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    return 0;   
}