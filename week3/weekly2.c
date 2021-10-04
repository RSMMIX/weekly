#include <stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปนาฬิกาทรายที่มีขนาดความสูงของกระเปาะแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)
void printmul(char* ch, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s", ch);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printmul(" ",i);
        printmul("*",(n*2)-1-2*i);
        printf("\n");
    }
    for (int i = n-2; i >= 0; i--)
    {
        printmul(" ",i);
        printmul("*",(n*2)-1-2*i);
        printf("\n");
    }
    return 0;
}