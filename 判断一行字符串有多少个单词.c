#include<stdio.h>
int main()
{
    char shuzu[100];
    int number,word=1;          //word��ʾ��������
    char blank;                 //blank��ʾ�ո�����
    gets(shuzu);
//����Ϊ��
    if(shuzu[0]=='\0')
    {
        printf("there is no char!!\n");
    }
//����ĸ�����ǿո�
    else if(shuzu[0]==' ')
    {
        printf("first char just a blank!!\n");
    }
//�ж��ܹ��м����ո�Ӷ�������м�������
    else
    {
        for(number=0;shuzu[number]!='\0';number++);
        {
            blank=shuzu[number];
            if(blank==' ')
            {
                word++;
            }
        }
        printf("%d\n",word);
    }

//�������
    for(number=0;shuzu[number]!='\0';number++)
    {
        printf("%c",shuzu[number]);
    }

    printf("\n%s",shuzu);

    return 0;
}
