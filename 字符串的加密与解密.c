#include<stdio.h>
#include<string.h>

int main()
{
    char shuzu[128]={"0"};
    char jiami[128]={"0"};
    int number,command;
    int i=1;                  //�����ж��Ƿ�����������

    while(1)
    {
        //����ָ��
        printf("������ָ�\n");
        printf("1���������µ�����\n");
        printf("2�������ܸռ��ܵ�����\n");
        printf("0�����˳�\n");
        scanf("%d",&command);

        //�ж������ָ����ܣ�
        if(command==1)
        {
            //��������
            printf("�������µ����ģ�\n");
            scanf("%s",&shuzu);

            //��������
            for(number=0;number<strlen(shuzu);number++)
            {
                jiami[number]=shuzu[number]+number+5;
            }
            jiami[number]='\0';

            //������ܺ������
            printf("���ܺ�������ǣ�\n");
            printf("%s\n\n",jiami);

            i=2;
        }

        //�ж������ָ����ܣ�
        else if(command==2)
        {
            if(i==2)
            {
                //��������
                for(number=strlen(shuzu)-1;number>=0;number--)
                {
                    shuzu[number]=jiami[number]-number-5;
                }

                //������ܺ������
                printf("���ܺ�������ǣ�\n");
                printf("%s\n\n",shuzu);

                i=1;
            }

            //����δ�������ĵ����
            else if(i==1)
            {
                printf("δ�������ģ���\n\n");
            }
        }

        //�ж������ָ��˳���
        else if(command==0)
        {
            printf("\n���˳�\n");
            break;
        }

        //�ж������ָ�������
        else
        {
            printf("�����������������\n\n");
        }
    }

    return 0;
}
