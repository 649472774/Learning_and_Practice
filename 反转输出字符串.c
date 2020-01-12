#include<stdio.h>
#include<string.h>

int main()
{
    char shuzu1[20]={"hello world"};
    char shuzu2[20]={0};
    int number1;
    int number2;

    //数组1字符串长度-1
    number1=strlen(shuzu1)-1;

    //向数组2插入字符
    for(number2=0;number2<=strlen(shuzu1)-1;number2++)
    {
        shuzu2[number2]=shuzu1[number1];
        number1--;
    }

    //输出数组1和数组2
    printf("源字符串：\n%s\n反转之后的字符串：\n%s\n",shuzu1,shuzu2);

    return 0;
}
