#include<stdio.h>
#include<string.h>

int main()
{
    char shuzu[20],change[20];              //shuzuΪ������ַ�����changeΪת������ַ���
    int number;

    for(;;)
    {
        //�����ַ���
        printf("�������ַ�����\n");
        scanf("%s",&shuzu);

        //ѡ��ʽ
        IN:
        {
            printf("��ѡ��ת����ʽ��\n1��������Сдת���ɴ�д\n2����������дת����Сд\n0���������˳�\n");
            scanf("%d",&number);
        }

        //�ж�ת����ʽ

        //ת���ɴ�д
        if(number==1)
        {
            strcpy(change,shuzu);
            strupr(change);
            printf("ת���ɴ�д��\n%s\n\n",change);
        }
        //ת����Сд
        else if(number==2)
        {
            strcpy(change,shuzu);
            strlwr(change);
            printf("ת����Сд��\n%s\n\n",change);
        }
        //�˳�
        else if(number==0)
        {
            printf("���˳�\n");
            break;
        }
        //�ж������������
        else
        {
            printf("����������������룡\n");
            goto IN;
        }
    }


    return 0;
}
