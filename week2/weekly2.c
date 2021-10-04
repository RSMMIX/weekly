#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปผีเสื้อที่มีขนาดของปีกแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)
void printmul(char* ch,int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s",ch);
    }
    
}
int main ()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n-1; i++) //ส่วนบน
    {
        printmul("* ",i);
        printmul("  ",(n-1)*2-1-((i-1)*2));
        printmul("* ",i);
        printf("\n");
    }
    //ส่วนกลาง
    printmul("* ",(n*2)-1);
    printf("\n");
    //ส่วนล่าง
    for (int i = 1; i <= n-1; i++)
    {
        printmul("* ",n-i);
        printmul("  ",(i*2)-1);
        printmul("* ",n-i);
        printf("\n");
    }
    return 0;
}