#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    char str3[100], str4[100];
    gets(str1);
    gets(str2);
    str3 = strlwr(str1);
    str4 = strlwr(str2);
    if(str1.compare(str2) == 0)
        printf("0");
    else if(str1.compare(str2) <0)
        printf("-1");
    else
        printf("1");

    return 0;
}

