#include<stdio.h>
main()
{
    int number;
    char **p;
    char *month[]=
    {
        "һ��",
        "����",
        "����",
        "����",
        "����",
        "����",
        "����",
        "����",
        "����",
        "ʮ��",
        "ʮһ��",
        "ʮ����"
    };

    for(number=0;number<12;number++)
    {
        p=month+number;
        printf("%s\n",*p);
    }
}
