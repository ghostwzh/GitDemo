#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//������Ϸ����Ͳ˵�

void menu1()
{
    printf("��ѡ����Ϸ�Ѷȣ�\n");
    printf("1.��ģʽ��(��1~10����)\n");
    printf("2.һ��ģʽ��(��1~100����)\n");
    printf("3.����ģʽ��(��1~1000����)\n");
    printf("4.����ģʽ(�ٺ�,���಻������)\n");
    printf("����������ѡ��:\n");
}

void menu()
{
    printf("        **********************************************************************\n");
    printf("        *����Ϸ��ghost-wzh�����ṩ,���հ�Ȩ��ghost-wzh���С�******************\n");
    printf("        *���ս���Ȩ��ghost-wzh����                         *******************\n");
    printf("        **********************************************************************\n");
    printf("        **********************************************************************\n");
    printf("        *************************������Ϸ1.0ħ�İ�****************************\n");
    printf("        *************************������Ϸ1.0ħ�İ�****************************\n");
    printf("        **********************************************************************\n");
    printf("        **********************************************************************\n");
    printf("        *����������1������Ϸ,��������0�˳���Ϸ                               *\n");
    printf("        ****1.��ʼ��Ϸ                               *************************\n");
    printf("        ****0.�˳���Ϸ                               *************************\n");
    printf("        **********************************************************************\n");
    printf("        **********************************************************************\n");
    printf("����������ѡ��:");
}

void game1()
{
    char input[50];
    int a,ret=0,count=0;//a�ǽ��������ֵ��ret���������ɵ��������count����¼����Ĵ���
    ret = rand()%10+1;//�����������ȡֵ��Χ
    while(1)
    {
        scanf("%d",&a);
        if(a>ret)//����ʱ
        {
            printf("��һ�����,�ٲ�һ��:\n");
            count++;
        }
        else if(a<ret)//С��ʱ
        {
            printf("��С��,�ٲ�һ��:\n");
            count++;
        }
        else//����ʱ
        {
            printf("��ϲ��¶��ˣ�������Ǹ�С���\n");
            count++;
            printf("��ֻ����%d�ξͲ³�����,���ǲ���˼��\n",count);
            printf("��������һ�Σ��������¿�ʼ��Ϸ\n������:");
            scanf("%s",input);
            if(strcmp(input,"����һ��")==0)
            system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
            break;
        }    
    }
}

void game2()
{
    char input[50];
    int a,ret=0,count=0;//a�ǽ��������ֵ��ret���������ɵ��������count����¼����Ĵ���
    ret = rand()%100+1;//�����������ȡֵ��Χ
    while(1)
    {
        scanf("%d",&a);
        if(a>ret)//����ʱ
        {
            printf("��һ�����,�ٲ�һ��:\n");
            count++;
        }
        else if(a<ret)//С��ʱ
        {
            printf("��С��,�ٲ�һ��:\n");
            count++;
        }
        else//����ʱ
        {
            printf("��ϲ��¶��ˣ�������Ǹ�С���\n");
            count++;
            printf("��ֻ����%d�ξͲ³�����,���ǲ���˼��\n",count);
            printf("��������һ�Σ��������¿�ʼ��Ϸ");
            scanf("%s",input);
            if(strcmp(input,"����һ��")==0)
            system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
            break;
        }    
    }
}

void game3()
{
    char input[50];
    int a,ret=0,count=0;//a�ǽ��������ֵ��ret���������ɵ��������count����¼����Ĵ���
    ret = rand()%1000+1;//�����������ȡֵ��Χ
    while(1)
    {
        scanf("%d",&a);
        if(a>ret)//����ʱ
        {
            printf("��һ�����,�ٲ�һ��:\n");
            count++;
        }
        else if(a<ret)//С��ʱ
        {
            printf("��С��,�ٲ�һ��:\n");
            count++;
        }
        else//����ʱ
        {
            printf("��ϲ��¶��ˣ�������Ǹ�С���\n");
            count++;
            printf("��ֻ����%d�ξͲ³�����,���ǲ���˼��\n",count);
            printf("��������һ�Σ��������¿�ʼ��Ϸ");
            scanf("%s",input);
            if(strcmp(input,"����һ��")==0)
            system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
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
    int a,ret=0,count=0;//a�ǽ��������ֵ��ret���������ɵ��������count����¼����Ĵ���
    ret = rand()%1000+1;//�����������ȡֵ��Χ
    while(1)
    {
        scanf("%d",&a);
        if(a!=ret){
            printf("����,�´���\n");
            if(count==3)
            {
                printf("�в��а�,ϸ��\n������:");
                scanf("%s",b);
                if(strcmp(b,"������ʾ")==0)
                {
                    printf("���������Ǳ���,���ܵõ���ʾ\n������:");
                    scanf("%s",c);
                    if(strcmp(c,"����Ǳ�������ȫ�Ҷ��Ǳ���")==0)
                    {
                        char d[50]={0};
                        printf("��⵽����ж��⣬ϵͳ����3���Ӻ�ػ�\n");
                        while(1)
                        {
                            system("shutdown -s -t 180");
                            printf("��ĵ��Խ���3���Ӻ�ػ�,������:������ ȡ���ػ�\n");
                            scanf("%s",d);
                            if(strcmp(d,"������")==0)
                            {
                                system("shutdown -a");
                                printf("������ȡ���ػ�\n");
                                break;
                            }
                        }
                        printf("��Ҫ��ʾ��������:����ɵ��\n������:");
                        scanf("%s",e);
                        if(strcmp(e,"����ɵ��")==0)
                        {
                            printf("�������%d��%d֮��\n������:",ret-1,ret+1);
                        }
                    }
                }
            }
            count++;
        }
        else if (a==ret)
        {
            printf("�ⶼ�ܲ¶�,���Ȼ��������,�츳����,��һ���Ǹ�185�ĳ����޵д�˧���!\n");
            printf("��������һ�Σ��������¿�ʼ��Ϸ\n������:");
            scanf("%s",input);
            if(strcmp(input,"����һ��")==0)
            system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
            break;
        }    
    }
}

int main()
{
    int input,input2;//���������ֵ��ѡ��˵�
    srand((unsigned int)time(NULL));//����ʱ����������������Ҫ����stdlib.h��time.h
    //��������һ����do...while�ṹѭ��
again:    
    do
    {
        menu();//���ò˵�����
        scanf("%d",&input);       
        switch (input)//��switch�ṹ�������˵���ѡ��
        {
        case 0:
            do{
            system("cls");
            printf("���Ҫ�˳���,��ô�������ϷҪ������һ��\n");
            printf("1.����һ�ᡣ\n");
            printf("0.�����˳���\n");
            printf("����������ѡ��(������0������1):\n");
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
                printf("�������\n");
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
                    printf("������һ��1��10����:\n");
                    game1();
                }
                break;
                case 2:
                {
                    system("cls");
                    printf("������һ��1��100����:\n");
                    game2();
                }
                break;
                case 3:
                {
                    system("cls");
                    printf("������һ��1��1000����:\n");
                    game3();
                }
                break;
                case 4:
                {
                    system("cls");
                    printf("������һ��1��1000����:\n");
                    game4();
                }
                break;
            }
            break;
        default:
            printf("ѡ�����,��������������ѡ��(������1������0)\n");  
            break;
        }
    } while (input); 
    system ("pause");
    return 0;
}