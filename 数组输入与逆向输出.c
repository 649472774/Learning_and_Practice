#include<stdio.h>
int main()
{
    int shuzu[5],number,temp;
    printf("������5�����֣�\n");

    for(number=0;number<5;number++)
    {
        scanf("%d",&shuzu[number]);
    }

    printf("�����ڵ������ǣ�\n");
    for(number=0;number<5;number++)
    {
        printf("%d ",shuzu[number]);
    }
    printf("\n");

    for(number=0;number<2;number++)
    {
        temp=shuzu[number];
        shuzu[number]=shuzu[4-number];
        shuzu[4-number]=temp;
    }
    printf("���������ڵ������ǣ�\n");
    for(number=0;number<5;number++)
    {
        printf("%d ",shuzu[number]);
    }
    printf("\n");
    return 0;
}
