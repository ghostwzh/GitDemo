#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//制作游戏界面和菜单

void menu1()
{
    printf("请选择游戏难度：\n");
    printf("1.简单模式。(猜1~10的数)\n");
    printf("2.一般模式。(猜1~100的数)\n");
    printf("3.困难模式。(猜1~1000的数)\n");
    printf("4.炼狱模式(嘿嘿,心脏不好慎入)\n");
    printf("请输入您的选择:\n");
}

void menu()
{
    printf("        **********************************************************************\n");
    printf("        *本游戏由ghost-wzh独家提供,最终版权归ghost-wzh所有。******************\n");
    printf("        *最终解释权归ghost-wzh所有                         *******************\n");
    printf("        **********************************************************************\n");
    printf("        **********************************************************************\n");
    printf("        *************************猜数游戏1.0魔改版****************************\n");
    printf("        *************************猜数游戏1.0魔改版****************************\n");
    printf("        **********************************************************************\n");
    printf("        **********************************************************************\n");
    printf("        *请输入数字1进入游戏,输入数字0退出游戏                               *\n");
    printf("        ****1.开始游戏                               *************************\n");
    printf("        ****0.退出游戏                               *************************\n");
    printf("        **********************************************************************\n");
    printf("        **********************************************************************\n");
    printf("请输入您的选择:");
}

void game1()
{
    char input[50];
    int a,ret=0,count=0;//a是接收输入的值，ret来接收生成的随机数，count来记录输入的次数
    ret = rand()%10+1;//定义随机数的取值范围
    while(1)
    {
        scanf("%d",&a);
        if(a>ret)//大于时
        {
            printf("有一点大了,再猜一次:\n");
            count++;
        }
        else if(a<ret)//小于时
        {
            printf("猜小了,再猜一次:\n");
            count++;
        }
        else//等于时
        {
            printf("恭喜你猜对了，你可真是个小天才\n");
            count++;
            printf("你只用了%d次就猜出来了,真是不可思议\n",count);
            printf("输入再来一次，即可重新开始游戏\n请输入:");
            scanf("%s",input);
            if(strcmp(input,"再来一次")==0)
            system("cls");//执行系统命令的一个函数-cls-清空屏幕
            break;
        }    
    }
}

void game2()
{
    char input[50];
    int a,ret=0,count=0;//a是接收输入的值，ret来接收生成的随机数，count来记录输入的次数
    ret = rand()%100+1;//定义随机数的取值范围
    while(1)
    {
        scanf("%d",&a);
        if(a>ret)//大于时
        {
            printf("有一点大了,再猜一次:\n");
            count++;
        }
        else if(a<ret)//小于时
        {
            printf("猜小了,再猜一次:\n");
            count++;
        }
        else//等于时
        {
            printf("恭喜你猜对了，你可真是个小天才\n");
            count++;
            printf("你只用了%d次就猜出来了,真是不可思议\n",count);
            printf("输入再来一次，即可重新开始游戏");
            scanf("%s",input);
            if(strcmp(input,"再来一次")==0)
            system("cls");//执行系统命令的一个函数-cls-清空屏幕
            break;
        }    
    }
}

void game3()
{
    char input[50];
    int a,ret=0,count=0;//a是接收输入的值，ret来接收生成的随机数，count来记录输入的次数
    ret = rand()%1000+1;//定义随机数的取值范围
    while(1)
    {
        scanf("%d",&a);
        if(a>ret)//大于时
        {
            printf("有一点大了,再猜一次:\n");
            count++;
        }
        else if(a<ret)//小于时
        {
            printf("猜小了,再猜一次:\n");
            count++;
        }
        else//等于时
        {
            printf("恭喜你猜对了，你可真是个小天才\n");
            count++;
            printf("你只用了%d次就猜出来了,真是不可思议\n",count);
            printf("输入再来一次，即可重新开始游戏");
            scanf("%s",input);
            if(strcmp(input,"再来一次")==0)
            system("cls");//执行系统命令的一个函数-cls-清空屏幕
            break;
        }    
    }
}

void game4()
{
    char input[50];
    char b[50];
    char c[50];
    char e[50];
    int a,ret=0,count=0;//a是接收输入的值，ret来接收生成的随机数，count来记录输入的次数
    ret = rand()%1000+1;//定义随机数的取值范围
    while(1)
    {
        scanf("%d",&a);
        if(a!=ret){
            printf("笨蛋,猜错了\n");
            if(count==3)
            {
                printf("行不行啊,细狗\n请输入:");
                scanf("%s",b);
                if(strcmp(b,"给点提示")==0)
                {
                    printf("请输入我是笨蛋,就能得到提示\n请输入:");
                    scanf("%s",c);
                    if(strcmp(c,"你才是笨蛋，你全家都是笨蛋")==0)
                    {
                        char d[50]={0};
                        printf("检测到你带有恶意，系统将在3分钟后关机\n");
                        while(1)
                        {
                            system("shutdown -s -t 180");
                            printf("你的电脑将在3分钟后关机,请输入:我是猪 取消关机\n");
                            scanf("%s",d);
                            if(strcmp(d,"我是猪")==0)
                            {
                                system("shutdown -a");
                                printf("笨猪，已取消关机\n");
                                break;
                            }
                        }
                        printf("想要提示，请输入:我是傻子\n请输入:");
                        scanf("%s",e);
                        if(strcmp(e,"我是傻子")==0)
                        {
                            printf("这个数在%d到%d之间\n请输入:",ret-1,ret+1);
                        }
                    }
                }
            }
            count++;
        }
        else if (a==ret)
        {
            printf("这都能猜对,你果然聪明伶俐,天赋过人,你一定是个185的超级无敌大帅哥吧!\n");
            printf("输入再来一次，即可重新开始游戏\n请输入:");
            scanf("%s",input);
            if(strcmp(input,"再来一次")==0)
            system("cls");//执行系统命令的一个函数-cls-清空屏幕
            break;
        }    
    }
}

int main()
{
    int input,input2;//定义输入的值来选择菜单
    srand((unsigned int)time(NULL));//利用时间戳来生成随机数需要调用stdlib.h和time.h
    //至少运行一次用do...while结构循坏
again:    
    do
    {
        menu();//调用菜单界面
        scanf("%d",&input);       
        switch (input)//用switch结构来制作菜单的选择
        {
        case 0:
            do{
            system("cls");
            printf("真的要退出吗,那么好玩的游戏要不再玩一会\n");
            printf("1.再玩一会。\n");
            printf("0.残忍退出。\n");
            printf("请输入您的选择(请输入0或者是1):\n");
            scanf("%d",&input);
            if(input == 1)
            {
               system("cls");
               goto again;
            }
            else if(input == 0) {
               system("cls");
                break;
            }
            else{
                system("cls");
                printf("输入错误\n");
                goto again;                
            }
            }while (input);
            break;
        case 1:
            system("cls");
            menu1();
            scanf("%d",&input2);
            switch (input2)
            {
                case 1:
                {
                    system("cls");
                    printf("请输入一个1到10的数:\n");
                    game1();
                }
                break;
                case 2:
                {
                    system("cls");
                    printf("请输入一个1到100的数:\n");
                    game2();
                }
                break;
                case 3:
                {
                    system("cls");
                    printf("请输入一个1到1000的数:\n");
                    game3();
                }
                break;
                case 4:
                {
                    system("cls");
                    printf("请输入一个1到1000的数:\n");
                    game4();
                }
                break;
            }
            break;
        default:
            printf("选择错误,请重新输入您的选择(请输入1或者是0)\n");  
            break;
        }
    } while (input); 
    system ("pause");
    return 0;
}