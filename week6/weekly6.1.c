#include <stdio.h>
int most(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    //จงเขียนฟังก์ชั่นเพื่อหาตัวเลขที่มีค่ามากที่สุดจากอินพุทตัวเลข 2 ตัว (Level 3)
    int a,b;
    scanf("%d %d", &a , &b);
    printf("%d", most(a,b));
    return 0;
}