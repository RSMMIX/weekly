#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    //จงเขียนโปรแกรมเพื่อรับข้อความ 1 ข้อความแล้วให้โปรแกรมแสดงผลลัพธ์ว่ามีตัวอักษรตัวพิมพ์ใหญ่กี่ตัว ตัวพิมพ์เล็กกี่ตัว (Level 3)
    int lowercase = 0 , uppercase = 0;
    char str[100];
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]))
        {
            lowercase++;
        }
        if (isupper(str[i]))
        {
            uppercase++;
        }
    }
    printf("uppercase : %d\n",uppercase);
    printf("lowercase : %d\n",lowercase);
    return 0;
}