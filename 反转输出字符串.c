#include<stdio.h>
#include<string.h>

int main()
{
    char shuzu1[20]={"hello world"};
    char shuzu2[20]={0};
    int number1;
    int number2;

    //����1�ַ�������-1
    number1=strlen(shuzu1)-1;

    //������2�����ַ�
    for(number2=0;number2<=strlen(shuzu1)-1;number2++)
    {
        shuzu2[number2]=shuzu1[number1];
        number1--;
    }

    //�������1������2
    printf("Դ�ַ�����\n%s\n��ת֮����ַ�����\n%s\n",shuzu1,shuzu2);

    return 0;
}
