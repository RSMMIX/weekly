#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปนาฬิกาทรายที่มีขนาดความสูงของกระเปาะแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)
int main ()
{
    int n;
    scanf("%d",&n);
    int count=n*2-1;
    for (size_t j = 0; j < count; j++)
    {
        for (size_t i = 0; i < count; i++)
        {
            int less=(i< count-i-1)? i:count-i-1;
            int more=(i> count-i-1)? i:count-i-1;
            if (j <= less || j >= more)
            {
                printf("*");
            }
            else
            {
                printf("  ");
            } 
        }  
        printf("\n");
    } 
    return 0;
}