#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sum;
    sum=0;
    printf("请输入元素：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("输入的数组元素为：\n");
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
    printf("对角线之和为： %d",sum);
    return 0;
}
