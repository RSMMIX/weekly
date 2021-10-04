#include <stdio.h>
int most(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    //จงใช้ฟังก์ชั่นในข้อ 41 เพื่อหาตัวเลขที่มากที่สุดจากอินพุทตัวเลข 5 ตัว (Level 3)
    int a,b,c,d,f;
    scanf("%d %d %d %d %d", &a , &b ,&c ,&d , &f);
    printf("%d",most(a,most(b,most(c,most(d,f)))));
    return 0;
}