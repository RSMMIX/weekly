#include <stdio.h>
#include <string.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นกรอบสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= x-2; i++)
    {
        printf("*");
        for (int j = 1; j <= x-2; j++)
        {
            printf(" ");
        }
    printf("*\n");    
    }
    for (int i = 1; i <= x; i++)
    {
        printf("*");
    }
    
    return 0;
}