#include<stdio.h>
#include<string.h>

int main()
{
    char user[20]={"nozoo"};                       //设定用户名
    char password[20]={"kulipa123456789"};         //设定密码
    char ustr[20],pstr[20];
    int i=0;

    while(1)
    {
        printf("请输入用户名：\n");
        gets(ustr);
        printf("请输入密码：\n");
        gets(pstr);

        //判断用户名与密码是否正确
        if(strcmp(user,ustr)==0&&strcmp(password,pstr)==0)
        {
            //密码正确
            printf("\n欢迎使用！\n");
            break;
        }
        else
        {
            //密码错误
            printf("用户名或密码出错，请重新输入！\n\n");
        }
        i++;
        //设定密码输入错误次数
        if(i==3)
        {
            //错误过多
            printf("三次输入错误，账号被锁定！\n");
            break;
        }
    }

    return 0;
}
