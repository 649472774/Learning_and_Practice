#include<stdio.h>
#include<string.h>

int main()
{
    char user[20]={"nozoo"};                       //�趨�û���
    char password[20]={"kulipa123456789"};         //�趨����
    char ustr[20],pstr[20];
    int i=0;

    while(1)
    {
        printf("�������û�����\n");
        gets(ustr);
        printf("���������룺\n");
        gets(pstr);

        //�ж��û����������Ƿ���ȷ
        if(strcmp(user,ustr)==0&&strcmp(password,pstr)==0)
        {
            //������ȷ
            printf("\n��ӭʹ�ã�\n");
            break;
        }
        else
        {
            //�������
            printf("�û���������������������룡\n\n");
        }
        i++;
        //�趨��������������
        if(i==3)
        {
            //�������
            printf("������������˺ű�������\n");
            break;
        }
    }

    return 0;
}
