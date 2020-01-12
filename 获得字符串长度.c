#include<stdio.h>
#include<string.h>

int main()
{
    char shuzu1[50],shuzu2[50];
    int number;

    //输入第一个数组
    printf("输入一个字符串\n");
    scanf("%s",&shuzu1);
    number=strlen(shuzu1);
    printf("该数组字符串长度为：%d\n",number);

    //输入第二个数组
    printf("再次输入一个字符串\n");
    scanf("%s",&shuzu2);
    number=strlen(shuzu2);
    printf("该数组字符串长度为：%d\n",number);

    //连接两个数组
    strcat(shuzu1,shuzu2);
    printf("将两个数组连接：\n%s\n",shuzu1);
    number=strlen(shuzu1);
    printf("连接后的数组字符串长度为：%d",number);

    return 0;
}
