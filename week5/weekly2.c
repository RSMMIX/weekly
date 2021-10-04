#include<string.h>
#include<stdio.h>
 /*จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)
ตัวอย่าง Input : abcdef  Output : fedcba*/
void pawn(char s[], int n)
{
    printf("%c",s[n-1]);
    if (n > 0)
    {
        pawn(s,n-1);
    }
}
int main ()
{
    char s[1000]; 
    scanf("%s", s);
    int n = strlen(s);
    pawn(s,n);
    return 0;
}