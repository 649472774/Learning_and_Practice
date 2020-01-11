#include<stdio.h>
int main()
{
    int i,j;
    int a[10];
    int temp;
    int number;
    printf("为元素数组赋值：\n");

    for(i=0;i<10;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    //从小到大排序
    for(i=0;i<9;i++)
    {
        temp=a[i];
        number=i;
        for(j=i+1;j<10;j++)
        {
            if(a[j]<temp)
            {
                temp=a[j];
                number=j;
            }
        }
        //交换两个元素值
        a[number]=a[i];
        a[i]=temp;
    }

    //输出数组
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
        if(i==4)
            printf("\n");
    }

    return 0;
}
