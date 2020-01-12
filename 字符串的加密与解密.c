#include<stdio.h>
#include<string.h>

int main()
{
    char shuzu[128]={"0"};
    char jiami[128]={"0"};
    int number,command;
    int i=1;                  //用于判断是否已输入明文

    while(1)
    {
        //输入指令
        printf("请输入指令：\n");
        printf("1——加密新的明文\n");
        printf("2——解密刚加密的明文\n");
        printf("0——退出\n");
        scanf("%d",&command);

        //判断输入的指令（加密）
        if(command==1)
        {
            //输入明文
            printf("请输入新的明文：\n");
            scanf("%s",&shuzu);

            //加密明文
            for(number=0;number<strlen(shuzu);number++)
            {
                jiami[number]=shuzu[number]+number+5;
            }
            jiami[number]='\0';

            //输出加密后的密文
            printf("加密后的密文是：\n");
            printf("%s\n\n",jiami);

            i=2;
        }

        //判断输入的指令（解密）
        else if(command==2)
        {
            if(i==2)
            {
                //解密密文
                for(number=strlen(shuzu)-1;number>=0;number--)
                {
                    shuzu[number]=jiami[number]-number-5;
                }

                //输出解密后的明文
                printf("解密后的明文是：\n");
                printf("%s\n\n",shuzu);

                i=1;
            }

            //处理未输入明文的情况
            else if(i==1)
            {
                printf("未输入明文！！\n\n");
            }
        }

        //判断输入的指令（退出）
        else if(command==0)
        {
            printf("\n已退出\n");
            break;
        }

        //判断输入的指令（其他）
        else
        {
            printf("输入错误请重新输入\n\n");
        }
    }

    return 0;
}
