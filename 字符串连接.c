#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30],str2[30];
    //输入
    printf("输入目的字符串：\n");
    gets(str1);
    printf("输入源字符串：\n");
    gets(str2);
    //输出
    printf("输出目的字符串：\n");
    puts(str1);
    printf("输出源字符串：\n");
    puts(str2);

    //调用strcat函数实现字符串复制
    strcat(str1,str2);
    printf("复制之后的目的字符串：\n");
    puts(str1);

    return 0;
}
