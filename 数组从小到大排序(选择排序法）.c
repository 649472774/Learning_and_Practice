#include<stdio.h>
int main()
{
    int i,j;
    int a[10];
    int temp;
    int number;
    printf("ΪԪ�����鸳ֵ��\n");

    for(i=0;i<10;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    //��С��������
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
        //��������Ԫ��ֵ
        a[number]=a[i];
        a[i]=temp;
    }

    //�������
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
        if(i==4)
            printf("\n");
    }

    return 0;
}
