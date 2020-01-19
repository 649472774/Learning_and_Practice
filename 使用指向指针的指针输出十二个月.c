#include<stdio.h>
main()
{
    int number;
    char **p;
    char *month[]=
    {
        "一月",
        "二月",
        "三月",
        "四月",
        "五月",
        "六月",
        "七月",
        "八月",
        "九月",
        "十月",
        "十一月",
        "十二月"
    };

    for(number=0;number<12;number++)
    {
        p=month+number;
        printf("%s\n",*p);
    }
}
