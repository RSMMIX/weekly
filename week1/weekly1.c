#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นกรอบสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
int main ()
{
    int x;
    scanf("%d" ,&x);
    printf("");
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
                if (i == 1 || j == 1  || i == x || j == x)
                {
                    printf("*");
                }
                    else
                    {
                        printf(" ");
                    }            
        }            
        printf("\n");            
    }
    
    return 0;
}