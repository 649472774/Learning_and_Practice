#include<stdio.h>
#include<string.h>

int main()
{
    char shuzu[20],change[20];              //shuzu为输入的字符串，change为转换后的字符串
    int number;

    for(;;)
    {
        //输入字符串
        printf("请输入字符串：\n");
        scanf("%s",&shuzu);

        //选择方式
        IN:
        {
            printf("请选择转换方式：\n1————小写转换成大写\n2————大写转换成小写\n0————退出\n");
            scanf("%d",&number);
        }

        //判断转换方式

        //转换成大写
        if(number==1)
        {
            strcpy(change,shuzu);
            strupr(change);
            printf("转换成大写后：\n%s\n\n",change);
        }
        //转换成小写
        else if(number==2)
        {
            strcpy(change,shuzu);
            strlwr(change);
            printf("转换成小写后\n%s\n\n",change);
        }
        //退出
        else if(number==0)
        {
            printf("已退出\n");
            break;
        }
        //判断输入错误的情况
        else
        {
            printf("输入错误请重新输入！\n");
            goto IN;
        }
    }


    return 0;
}
