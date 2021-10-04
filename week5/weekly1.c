#include <stdio.h>
#include<string.h>
int main()
{
/*จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)
ตัวอย่าง Input : abcdef  Output : fedcba*/


    char s[1000]; 
    scanf("%s", s);
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}