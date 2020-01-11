#include<stdio.h>
int main()
{
    char shuzu[100];
    int number,word=1;          //word表示单词数量
    char blank;                 //blank表示空格数量
    gets(shuzu);
//不能为空
    if(shuzu[0]=='\0')
    {
        printf("there is no char!!\n");
    }
//首字母不能是空格
    else if(shuzu[0]==' ')
    {
        printf("first char just a blank!!\n");
    }
//判断总共有几个空格从而推算出有几个单词
    else
    {
        for(number=0;shuzu[number]!='\0';number++);
        {
            blank=shuzu[number];
            if(blank==' ')
            {
                word++;
            }
        }
        printf("%d\n",word);
    }

//两种输出
    for(number=0;shuzu[number]!='\0';number++)
    {
        printf("%c",shuzu[number]);
    }

    printf("\n%s",shuzu);

    return 0;
}
