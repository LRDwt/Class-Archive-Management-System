#include <stdio.h> 
#include <windows.h>
#include <conio.h>
#include <time.h> 
#include <string.h> 
#define N 100 
struct student 
{      
	int num;  
	char name[10];  
	char sex[3];    
	int age;    
}st[100];                                                                               //定义一个结构体
void Login();   //登录函数   
void xLogin();  // 检验密码                                                     
void menu();    //菜单函数 
void inputx();  //录入函数（菜单） 
void inputs();  //录入函数（输入） 
void save(int); //文件保存函数 
void baocun();  //保存函数 
void display(); //显示函数 
void del();     //删除函数 
void add();     //添加函数（用于录入函数添加中） 
void search();  //查询函数 
void search_num();  //按学号查询函数 
void search_name();  //按姓名查询函数 
void search_sex();  //按性别查询函数 
void search_age();   //按年龄查询函数 
void modify();      //修改函数 
void menu()                                                                                //菜单函数
{    
	printf("\t\t  *-*   *-*  *-*  *-*  *-*  *-*  *-*  *-*\n");  
    printf("\t\t│                                        │\n"); 
    printf("\t\t│           学生信息管理系统             │\n"); 
	printf("\t\t│                                        │\n"); 
    printf("\t\t  *-*   *-*  *-*  *-*  *-*  *-*  *-*  *-*\n");  
    printf("\t\t         *-*  *-*  *-*  *-*  *-*\n");  
    printf("\t\t    ◆◆◆  1.学生基本信息录入  ◆◆◆\n"); 
	printf("\t\t                                \n"); 
    printf("\t\t    ◆◆◆  2.学生基本信息显示  ◆◆◆\n");  
	printf("\t\t                                \n");
    printf("\t\t    ◆◆◆  3.学生基本信息保存  ◆◆◆\n");  
    printf("\t\t                                \n"); 
    printf("\t\t    ◆◆◆  4.学生基本信息删除  ◆◆◆\n");  
    printf("\t\t                                \n");
    printf("\t\t    ◆◆◆  5.学生基本信息修改  ◆◆◆\n");  
    printf("\t\t                               \n");
    printf("\t\t    ◆◆◆  6.学生基本信息查询  ◆◆◆\n");    
    printf("\t\t                                \n");
    printf("\t\t    ◆◆◆  7.退出系统          ◆◆◆\n");  
    printf("\t\t         *-*  *-*  *-*  *-*  *-*\n");
}  
//***********************************************************************************************************************
void main() 
{   
	int n,flag;  
	char a;
	Login();
	loop:  
	menu();                                            //调用菜单函数
	do  
	{      
		printf("请选择你需要操作的步骤(1--7):\n");     
		scanf("%d",&n);     
		if(n>=1&&n<=7)     
		{      
			flag=1;     
			break;
		}     
		else     
		{    
			flag=0;     
			printf("您输入有误，请重新选择!");     
		}  
	}      
	while(flag==0);     
	while(flag==1)   
	{
	   if(n==1)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("              ◆◆◆录入学生信息◆◆◆\n");
	   	    printf("************************************************************\n");
			printf("\n");
			inputx();   
			goto loop;  
	   }
	   if(n==2)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("              ◆◆◆显示学生信息◆◆◆\n");
	   	    printf("************************************************************\n");
			printf("\n");
			display();
			system("pause");
			system("cls"); 
			goto loop;  
	   }
	   if(n==3)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("              ◆◆◆保存学生信息◆◆◆\n");
	   	    printf("************************************************************\n");
			printf("\n");
			baocun();
			printf("按任意键回主菜单..."); 
			system("pause");
			system("cls");
			goto loop;    
	   }
	   if(n==4)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("              ◆◆◆删除学生信息◆◆◆\n");
	   	    printf("************************************************************\n");
			printf("\n");
			del();
			printf("按任意键回主菜单..."); 
			system("pause");
			system("cls");
			goto loop;    
			
	   }
	   if(n==5)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("               ◆◆◆修改学生信息◆◆◆\n");
	   	    printf("************************************************************\n");
			printf("\n");
			xLogin();
			modify();
			printf("按任意键回主菜单..."); 
			system("pause");
			system("cls");
			goto loop;    
			
	   }
	   if(n==6)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("               ◆◆◆查询学生信息◆◆◆\n");
	   	    printf("************************************************************\n");
			printf("\n");
			search();
			system("cls");
			goto loop;    
			        
	   }
	   if(n==7)
	   {
	   	    printf("谢谢使用.........");
	   	    exit(0);
	   }
	} 
}

void xLogin()                                                                                                   //登录函数 
{
    int mima,n=2; 
	printf("请输入修改密码：");                          //密码为123456 
	scanf("%d",&mima);
	while(mima!=5201314) 
	{
		system("cls");
		printf("密码输入错误...请重新输入...\n");
		scanf("%d",&mima); 
		n--;
		if(n==0)
		{
			printf("密码错误3次，验证失败......\n");
			exit(0);
			break;
		}
	}
	if(mima==5201314)
	{
		printf("验证成功......\n");
		system("pause"); 
		system("cls");
	}
	
}
//***********************************************************************************************************************
void Login()                                                                                                   //登录函数 
{
    int n=2; 
    int mima ;
    printf("\t\t***************************************************\n"); 
	printf("\t\t* * * * * * 学生信息管理系统登录界面 * * * * * * \n");
	printf("\t\t***************************************************\n");
	printf("请输入用户密码：");                          //密码为123456 
	scanf("%d",&mima);
	while(mima!=123456) 
	{
		system("cls");
		printf("密码输入错误...请重新输入...\n");
		scanf("%d",&mima); 
		n--;
		if(n==0)
		{
			printf("密码错误3次，登录失败......\n");
			exit(0);
			break;
		}
	}
	if(mima==123456)
	{
		printf("登录成功......\n");
		system("pause"); 
		system("cls");
	}
	
}

//***********************************************************************************************************************

void inputx()                                                                                              //录入函数（选择） 
{      
	int t,flag; 
	do  
	{    
	    printf("\n重新录入请按1 ， 添加学生信息请按2  ,   返回主菜单请按3\n");
		scanf("%d",&t);     
		if(t>=1&&t<=5)     
		{
		
		   flag=1;     
		   break;     		
		}     
	    else     
		{    
			flag=0;     
			printf("您输入有误，请重新选择!");     
		} 
		
	}      
	while(flag==0);
	while(flag==1)  
	{      
	 switch(t)     
	 {        
		case 1:printf("重新录入\n");inputs();break;        //引出录入函数（输出） 
		case 2:printf("添加学生信息\n");add();break;        //引用添加函数 
		case 3:system("cls");break;                  //引用主函数 
		default:break;     
	 }  
	 break;    
	} 
} 

//*********************************************************************************************************************** 
 
void inputs()                                                                                          //录入函数 （输入） 
{     
	int i,m,n;        
	printf("请输入需要创建信息的学生人数(1--100):\n"); 
	scanf("%d",&m);    
	for (i=0;i<m;i++)    
	{  
	    printf("请输入学号:  "); 
		scanf("%10d",&st[i].num);  
		printf("请输入姓名:  ");      
		scanf("%s",st[i].name);                  
		printf("请输入性别(F--女  M--男):  ");      
		scanf("%s",st[i].sex);         
		printf("请输入年龄:  ");      
		scanf("%d",&st[i].age);                 
		printf("\n");        
	}     
	printf("\n创建完毕!\n");       
	save(m);               //引出内存数据 
    printf("返回上一级请按1,结束请按2\n");    
	scanf("%d",&n);    
	switch(n)    
	{      
	   case 1: system("cls");   //返回菜单 
	   break;       
	   case 2: exit(0);     //退出 
	   break;
	   default:break;    
	} 
}  

//***********************************************************************************************************************

void save(int m)                                                                                              //保存文件函数
{  
	int i;  
	FILE*fp;   
	if ((fp=fopen("E:\\student.txt","w"))==NULL)   //打开文件 
	{    
		printf ("无法打开文件.....\n");      
		exit(0);  
	} 
	for (i=0;i<m;i++)                                                                   //将内存中学生的信息输出到磁盘文件中去
	{ 
		if (fwrite(&st[i],sizeof(struct student),1,fp)!=1)    
		printf("文件写入错误......\n");    
	}
	fclose(fp);
}  

//***********************************************************************************************************************

int load()                                                                                                      //导入函数
{       
	FILE*fp;  
	int i=0;     
	if((fp=fopen("E:\\student.txt","r"))==NULL)  
	{    
		printf ("无法打开文件......\n");      
		exit(0);  
	} 
	else   
	{   
		do    
		{          
			fread(&st[i],sizeof(struct student),1,fp);      //文件中读出 
			i++; 
		}    
			while(feof(fp)==0);  
	}   
	fclose(fp);              //关闭文件 
	return(i-1);             //返回值即为信息记录数 
}  

//***********************************************************************************************************************

void display()                                                                                                 //显示函数
{  
	int i;   
	int m=load();   
	printf("\n  学号\t\t姓名\t性别\t年龄\n");  
	for(i=0;i<m;i++)                                                                                   //m为输入部分的学生人数       
	printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);   
}


//***********************************************************************************************************************
  
void del()                                                                                                   //删除函数
{      
	int m=load();  
	int i,j,n,t,flag;  
	char name[20];   
	printf("\n 原来的学生信息:\n");     
	display();                                                                                                //调用显示函数     
	printf("\n");   
	printf("请输入要删除的学生的姓名:\n");  
	scanf("%s",name);
	for(flag=1,i=0;flag&&i<m;i++)  
	{    
		if(strcmp(st[i].name,name)==0)   
		{     
			printf("\n已找到此人，原始记录为：\n");              
			printf("\n学号\t\t姓名\t性别\t年龄   \n");     
			printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);                
			printf("\n确实要删除此人信息请按1,不删除请按0\n");    
			scanf("%d",&n);              
			if(n==1)                                                                                       //如果删除，则其他的信息都往上移一行    
			{       
				for(j=i;j<m-1;j++)      
				{      
					strcpy(st[j].name,st[j+1].name); 
					st[j].num=st[j+1].num;                 
					strcpy(st[j].sex,st[j+1].sex); 
                    st[j].age=st[j+1].age;     
				}     
					flag=0;    
			}   
		} 
	}   
			if(!flag)     
			m=m-1;  
			else      
			printf("\n对不起，查无此人!\n");      
			printf("\n 浏览删除后的所有学生信息:\n");     
			save(m);                                                                                    //调用保存函数   
			display();                                                                                  //调用显示函数  
			printf("\n继续删除请按1，不再删除请按0\n");   
			scanf("%d",&t);  
			switch(t)  
			{      
                 case 1:del();
	             break;     
                 case 0:break;     
                 default :break;  
			} 
}


//***********************************************************************************************************************
	
void add()                                                                                                       //添加函数
{   
	FILE*fp;
	int t;
	int n,a;      
	int count=0;     
	int i,j;      
	int m=load();      
	printf("\n 原来的学生信息:\n");     
	display();                                                                                                //调用显示函数     
	printf("\n");      
	fp=fopen("student_list.txt","a");      
	printf("请输入想增加的学生数:\n");  
	scanf("%d",&n);      
	for (i=m;i<(m+n);i++)   
	{    
		printf("\n 请输入新增加学生的信息:\n");  
		loop: 
		printf("请输入学号:  "); 
		scanf("%10d",&st[i].num); 
		printf("请输入姓名:  ");      
		scanf("%s",st[i].name);                  
		printf("请输入性别(F--女  M--男):  ");      
		scanf("%s",st[i].sex);         
		printf("请输入年龄:  ");      
		scanf("%d",&st[i].age);                 
		printf("\n");      
		count=count+1;    
		printf("已增加的人数:\n");      
		printf("%d\n",count);  }      
	    printf("\n添加完毕!\n"); m=m+count;   
		printf("\n显示增加后的所有学生信息:\n");  
		printf("\n");  
		save(m);     
		display();    
		fclose(fp);
		printf("继续添加请按1,返回主菜单请按2\n");    
	    scanf("%d",&t);    
	    switch(t)    
		{      
	      case 1: add(); 
	      break;       
	      case 2: system("cls");
	      break;
	      default:break;    
		} 
} 

//***********************************************************************************************************************
 
void search()                                                                                                   //查询函数
{      
	int t,flag;  
	do  
	{      
		//printf("\n按学号查询请按1 ， 按姓名查询请按2 ， 按性别查询请按3  ,  按年龄查询请按4， 进入主函数按5\n");
		printf("\n\t*****1--按学号查询******\n");
		printf("\t*****2--按姓名查询******\n");
		printf("\t*****3--按性别查询******\n");
		printf("\t*****4--按年龄查询******\n");
		printf("\t*****5--返回主菜单******\n") ;
		scanf("%d",&t);     
		if(t>=1&&t<=5)     
		{
		   flag=1;     
		   break;     
		}     
	    else     
		{    
			flag=0;     
			printf("您输入有误，请重新选择!");     
		} 
	}      
		while(flag==0);
		while(flag==1)  
		{      
			switch(t)     
			{        
				case 1:printf("按学号查询\n");search_num();break;      
				case 2:printf("按姓名查询\n");search_name();break;      
				case 3:printf("按性别查询\n");search_sex();break;   
				case 4:printf("按年龄查询\n");search_age();break;      
				case 5:system("cls");break;      
				default:break;     
			} 
			break;     
		} 
}

//***********************************************************************************************************************
  
void search_num()                                                                                                //按学号查询
{    
	int num;   
	int i,t;    
	int m=load();    
	printf("请输入要查找的学号:\n");
    scanf("%d",&num);   
	for(i=0;i<m;i++)      
	if(num==st[i].num)  
	{        
		printf("\n已找到此人，其记录为：\n");         
		printf("\n学号\t\t姓名\t性别\t年龄   \n");      
		printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);       
		break;  
	}     
	if(i==m)        
	printf("\n对不起，查无此人\n");    
	printf("\n");     
	printf("返回查询函数请按1,退出查询请按2\n");    
	scanf("%d",&t);    
	switch(t)    
	{      
	   case 1:search();
	   break;       
	   case 2: break;  
	   default:break;    
	} 
} 

//***********************************************************************************************************************

void search_name()                                                                                             //按姓名查询
{    
	char name[10];   
	int i,t;    
	int m=load();    
	printf("请输入要查找的姓名:\n");   
	scanf("%s",name);   
	for(i=0;i<m;i++)  	    
	if(strcmp(st[i].name,name)==0)  
	{      
		printf("\n已找到，其记录为：\n");      
		printf("\n学号\t\t姓名\t性别\t年龄   \n");  
		printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);
	} 
	if(i==m)   
	//printf("\n对不起，查无此人\n");    
	printf("\n"); 
	printf("返回查询函数请按1,退出查询请按2\n");    
	scanf("%d",&t);
	switch(t)   
	{     
		case 1:search();break;       
		case 2:break;    
		default :break;   
	}  
} 

//***********************************************************************************************************************
 
void search_sex()                                                                                                //按性别查询
{    
	char sex[3];   
	int i, t;    
	int m=load();    
	printf("请输入要查找的性别:\n");   
	scanf("%s",&sex);   
	for(i=0;i<m;i++)
	{
		if(strcmp(st[i].sex,sex)==0)  
		{        
			printf("\n已找到此人，其记录为：\n");         
			printf("\n学号\t\t姓名\t性别\t年龄  \n");
			printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);
		}
	}
		printf("\n");     
		printf("返回查询函数请按1,退出查询请按2\n");    
		scanf("%d",&t);   
		switch(t)   
		{      
			case 1:search();break;       
			case 2:break;    
			default :break;   
		}   
} 

//***********************************************************************************************************************
 
void search_age()                                                                                              //按年龄查询
{    
	int age;   
	int i, t;    
	int m=load();    
	printf("请输入要查找的年龄:\n");   
	scanf("%d",&age); 
	for(i=0;i<m;i++)
	{
	    if(age==st[i].age)
		{       
			printf("\n已找到此人，其记录为：\n");         
			printf("\n学号\t\t姓名\t性别\t年龄   \n");  
			printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);       
		}
	}
	printf("\n");     
	printf("返回查询函数请按1,退出查询请按2\n");    
	scanf("%d",&t);   
	switch(t)   
	{      
		case 1:search();break;       
		case 2:break;    
		default :break;   
	} 
}  

//***********************************************************************************************************************

void modify()                                                                                                    //修改函数
{      
	int num;  
	char name[10]; 
    char sex[3];    
	int age;       
	int b,c,i,n,t,flag;    
	int m=load();                                                                                             //导入文件内的信息     
	printf("\n 原来的学生信息:\n");     
	display();                                                                                                //调用显示函数 
	printf("\n");      
	printf("请输入要修改的学生的姓名:\n");  
	scanf("%s",name);   
	for(flag=1,i=0;flag&&i<m;i++)  
	{    
		if(strcmp(st[i].name,name)==0)   
		{     
			printf("\n已找到此人，原始记录为：\n");              
			printf("\n学号\t\t姓名\t性别\t年龄   \n");     
			printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);                
			printf("\n确实要修改此人信息请按1  不修改请按0\n");    
			scanf("%d",&n);             
			if(n==1) 
			{                 
				printf("\n需要进行修改的选项\n 1.学号 2.姓名 3.性别 4.年龄 \n");                  
				printf("请输入你想修改的那一项序号:\n");                  
				scanf("%d",&c);                  
				if(c>8||c<1)             
				printf("\n选择错误，请重新选择!\n");      
			}           
			flag=0;   
		 }           
	 }     
	 if(flag==1)   
	 printf("\n对不起，查无此人!\n");       
	 do    
	 {    
		 switch(c)                                               //因为当找到第i个学生时,for语句后i自加了1,所以下面的应该把改后的信息赋值给第i-1个人   
		 {               
		     case 1:printf("学号改为: ");       
			 scanf("%d",&num);st[i-1].num=num;       
			 break;               
			 case 2:printf("姓名改为: ");          
				 scanf("%s",name);        
				 strcpy(st[i-1].name,name);           
				 break;               
			 case 3:printf("性别改为: ");          
				 getchar();           
				 scanf("%s",&sex);       
				 strcpy(st[i-1].sex,sex);       
				 break;               
			 case 4:printf("年龄改为: ");          
				 scanf("%d",&age);                    
				 st[i-1].age=age;       
				 break;
		 }	        
	   printf("\n");    
	   printf("\n是否确定所修改的信息?\n 是 请按1  不,重新修改 请按2:  \n"); 
	   scanf("%d",&b);      
	}       
	while(b==2);     
	printf("\n显示修改后的所有学生信息:\n");    
	printf("\n");    
	save(m);    
	display();     
	printf("\n继续修改请按1，不再修改请按0\n");    
	scanf("%d",&t);    
	switch(t)  
	{      
	    case 1:modify();
		break;     
	    case 0:break;     
	    default :break;  
	}   
}

//***********************************************************************************************************************

void baocun()                                                                                               //保存函数
{
	int i;
	int m=load();
	FILE*fp;   
	if ((fp=fopen("D:\\student.txt","w"))==NULL)   
	{    
		printf ("cannot open file\n");      
		exit(0);  
	}
	fprintf(fp,"学号\t\t姓名\t性别\t年龄\n");
	fprintf(fp,"--------------------------------------\n");
	for (i=0;i<m;i++)                                                                         //将内存中学生的信息输出到磁盘文件中去
	{ 
		 fprintf(fp,"%d\t %s\t %s\t %d\n",st[i].num,st[i].name,st[i].sex,st[i].age);
	}
	fclose(fp);
	printf("文件保存成功！");
}
