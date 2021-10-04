#include <stdio.h>
int main()
{
    //จงเขียนโปรแกรมเพื่อรับข้อความ 1 ข้อความ แล้วให้โปรแกรมแสดงผลลัพธ์ว่ามีสระอะไรบ้าง อย่างละกี่ตัว (Level 3)
    int a=0,e=0,i=0,o=0,u=0;
    char str[100];
    scanf("%[^\n]",str);
    for (size_t p = 0; str[p] != '\0'; p++)
    {
        switch (str[p])
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        default:
            break;
        }
    }
    if (a) {printf("a = %d\n",a);}
    if (e) {printf("e = %d\n",e);}
    if (i) {printf("i = %d\n",i);}
    if (o) {printf("o = %d\n",o);}
    if (u) {printf("u = %d\n",u);}
    return 0;
}