#include<stdio.h>
#include<string.h>

int main()
{
    char shuzu1[50],shuzu2[50];
    int number;

    //�����һ������
    printf("����һ���ַ���\n");
    scanf("%s",&shuzu1);
    number=strlen(shuzu1);
    printf("�������ַ�������Ϊ��%d\n",number);

    //����ڶ�������
    printf("�ٴ�����һ���ַ���\n");
    scanf("%s",&shuzu2);
    number=strlen(shuzu2);
    printf("�������ַ�������Ϊ��%d\n",number);

    //������������
    strcat(shuzu1,shuzu2);
    printf("�������������ӣ�\n%s\n",shuzu1);
    number=strlen(shuzu1);
    printf("���Ӻ�������ַ�������Ϊ��%d",number);

    return 0;
}
