#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sum;
    sum=0;
    printf("������Ԫ�أ�\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("���������Ԫ��Ϊ��\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i!=1&&i==j)
                sum=sum+a[i][j];
        }
    }
    printf("�Խ���֮��Ϊ�� %d",sum);
    return 0;
}
