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
}st[100];                                                                               //����һ���ṹ��
void Login();   //��¼����   
void xLogin();  // ��������                                                     
void menu();    //�˵����� 
void inputx();  //¼�뺯�����˵��� 
void inputs();  //¼�뺯�������룩 
void save(int); //�ļ����溯�� 
void baocun();  //���溯�� 
void display(); //��ʾ���� 
void del();     //ɾ������ 
void add();     //��Ӻ���������¼�뺯������У� 
void search();  //��ѯ���� 
void search_num();  //��ѧ�Ų�ѯ���� 
void search_name();  //��������ѯ���� 
void search_sex();  //���Ա��ѯ���� 
void search_age();   //�������ѯ���� 
void modify();      //�޸ĺ��� 
void menu()                                                                                //�˵�����
{    
	printf("\t\t  *-*   *-*  *-*  *-*  *-*  *-*  *-*  *-*\n");  
    printf("\t\t��                                        ��\n"); 
    printf("\t\t��           ѧ����Ϣ����ϵͳ             ��\n"); 
	printf("\t\t��                                        ��\n"); 
    printf("\t\t  *-*   *-*  *-*  *-*  *-*  *-*  *-*  *-*\n");  
    printf("\t\t         *-*  *-*  *-*  *-*  *-*\n");  
    printf("\t\t    ������  1.ѧ��������Ϣ¼��  ������\n"); 
	printf("\t\t                                \n"); 
    printf("\t\t    ������  2.ѧ��������Ϣ��ʾ  ������\n");  
	printf("\t\t                                \n");
    printf("\t\t    ������  3.ѧ��������Ϣ����  ������\n");  
    printf("\t\t                                \n"); 
    printf("\t\t    ������  4.ѧ��������Ϣɾ��  ������\n");  
    printf("\t\t                                \n");
    printf("\t\t    ������  5.ѧ��������Ϣ�޸�  ������\n");  
    printf("\t\t                               \n");
    printf("\t\t    ������  6.ѧ��������Ϣ��ѯ  ������\n");    
    printf("\t\t                                \n");
    printf("\t\t    ������  7.�˳�ϵͳ          ������\n");  
    printf("\t\t         *-*  *-*  *-*  *-*  *-*\n");
}  
//***********************************************************************************************************************
void main() 
{   
	int n,flag;  
	char a;
	Login();
	loop:  
	menu();                                            //���ò˵�����
	do  
	{      
		printf("��ѡ������Ҫ�����Ĳ���(1--7):\n");     
		scanf("%d",&n);     
		if(n>=1&&n<=7)     
		{      
			flag=1;     
			break;
		}     
		else     
		{    
			flag=0;     
			printf("����������������ѡ��!");     
		}  
	}      
	while(flag==0);     
	while(flag==1)   
	{
	   if(n==1)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("              ������¼��ѧ����Ϣ������\n");
	   	    printf("************************************************************\n");
			printf("\n");
			inputx();   
			goto loop;  
	   }
	   if(n==2)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("              ��������ʾѧ����Ϣ������\n");
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
	   	    printf("              ����������ѧ����Ϣ������\n");
	   	    printf("************************************************************\n");
			printf("\n");
			baocun();
			printf("������������˵�..."); 
			system("pause");
			system("cls");
			goto loop;    
	   }
	   if(n==4)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("              ������ɾ��ѧ����Ϣ������\n");
	   	    printf("************************************************************\n");
			printf("\n");
			del();
			printf("������������˵�..."); 
			system("pause");
			system("cls");
			goto loop;    
			
	   }
	   if(n==5)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("               �������޸�ѧ����Ϣ������\n");
	   	    printf("************************************************************\n");
			printf("\n");
			xLogin();
			modify();
			printf("������������˵�..."); 
			system("pause");
			system("cls");
			goto loop;    
			
	   }
	   if(n==6)
	   {
	   	    system("cls");
	   	    printf("************************************************************\n");
	   	    printf("               ��������ѯѧ����Ϣ������\n");
	   	    printf("************************************************************\n");
			printf("\n");
			search();
			system("cls");
			goto loop;    
			        
	   }
	   if(n==7)
	   {
	   	    printf("ллʹ��.........");
	   	    exit(0);
	   }
	} 
}

void xLogin()                                                                                                   //��¼���� 
{
    int mima,n=2; 
	printf("�������޸����룺");                          //����Ϊ123456 
	scanf("%d",&mima);
	while(mima!=5201314) 
	{
		system("cls");
		printf("�����������...����������...\n");
		scanf("%d",&mima); 
		n--;
		if(n==0)
		{
			printf("�������3�Σ���֤ʧ��......\n");
			exit(0);
			break;
		}
	}
	if(mima==5201314)
	{
		printf("��֤�ɹ�......\n");
		system("pause"); 
		system("cls");
	}
	
}
//***********************************************************************************************************************
void Login()                                                                                                   //��¼���� 
{
    int n=2; 
    int mima ;
    printf("\t\t***************************************************\n"); 
	printf("\t\t* * * * * * ѧ����Ϣ����ϵͳ��¼���� * * * * * * \n");
	printf("\t\t***************************************************\n");
	printf("�������û����룺");                          //����Ϊ123456 
	scanf("%d",&mima);
	while(mima!=123456) 
	{
		system("cls");
		printf("�����������...����������...\n");
		scanf("%d",&mima); 
		n--;
		if(n==0)
		{
			printf("�������3�Σ���¼ʧ��......\n");
			exit(0);
			break;
		}
	}
	if(mima==123456)
	{
		printf("��¼�ɹ�......\n");
		system("pause"); 
		system("cls");
	}
	
}

//***********************************************************************************************************************

void inputx()                                                                                              //¼�뺯����ѡ�� 
{      
	int t,flag; 
	do  
	{    
	    printf("\n����¼���밴1 �� ���ѧ����Ϣ�밴2  ,   �������˵��밴3\n");
		scanf("%d",&t);     
		if(t>=1&&t<=5)     
		{
		
		   flag=1;     
		   break;     		
		}     
	    else     
		{    
			flag=0;     
			printf("����������������ѡ��!");     
		} 
		
	}      
	while(flag==0);
	while(flag==1)  
	{      
	 switch(t)     
	 {        
		case 1:printf("����¼��\n");inputs();break;        //����¼�뺯��������� 
		case 2:printf("���ѧ����Ϣ\n");add();break;        //������Ӻ��� 
		case 3:system("cls");break;                  //���������� 
		default:break;     
	 }  
	 break;    
	} 
} 

//*********************************************************************************************************************** 
 
void inputs()                                                                                          //¼�뺯�� �����룩 
{     
	int i,m,n;        
	printf("��������Ҫ������Ϣ��ѧ������(1--100):\n"); 
	scanf("%d",&m);    
	for (i=0;i<m;i++)    
	{  
	    printf("������ѧ��:  "); 
		scanf("%10d",&st[i].num);  
		printf("����������:  ");      
		scanf("%s",st[i].name);                  
		printf("�������Ա�(F--Ů  M--��):  ");      
		scanf("%s",st[i].sex);         
		printf("����������:  ");      
		scanf("%d",&st[i].age);                 
		printf("\n");        
	}     
	printf("\n�������!\n");       
	save(m);               //�����ڴ����� 
    printf("������һ���밴1,�����밴2\n");    
	scanf("%d",&n);    
	switch(n)    
	{      
	   case 1: system("cls");   //���ز˵� 
	   break;       
	   case 2: exit(0);     //�˳� 
	   break;
	   default:break;    
	} 
}  

//***********************************************************************************************************************

void save(int m)                                                                                              //�����ļ�����
{  
	int i;  
	FILE*fp;   
	if ((fp=fopen("E:\\student.txt","w"))==NULL)   //���ļ� 
	{    
		printf ("�޷����ļ�.....\n");      
		exit(0);  
	} 
	for (i=0;i<m;i++)                                                                   //���ڴ���ѧ������Ϣ����������ļ���ȥ
	{ 
		if (fwrite(&st[i],sizeof(struct student),1,fp)!=1)    
		printf("�ļ�д�����......\n");    
	}
	fclose(fp);
}  

//***********************************************************************************************************************

int load()                                                                                                      //���뺯��
{       
	FILE*fp;  
	int i=0;     
	if((fp=fopen("E:\\student.txt","r"))==NULL)  
	{    
		printf ("�޷����ļ�......\n");      
		exit(0);  
	} 
	else   
	{   
		do    
		{          
			fread(&st[i],sizeof(struct student),1,fp);      //�ļ��ж��� 
			i++; 
		}    
			while(feof(fp)==0);  
	}   
	fclose(fp);              //�ر��ļ� 
	return(i-1);             //����ֵ��Ϊ��Ϣ��¼�� 
}  

//***********************************************************************************************************************

void display()                                                                                                 //��ʾ����
{  
	int i;   
	int m=load();   
	printf("\n  ѧ��\t\t����\t�Ա�\t����\n");  
	for(i=0;i<m;i++)                                                                                   //mΪ���벿�ֵ�ѧ������       
	printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);   
}


//***********************************************************************************************************************
  
void del()                                                                                                   //ɾ������
{      
	int m=load();  
	int i,j,n,t,flag;  
	char name[20];   
	printf("\n ԭ����ѧ����Ϣ:\n");     
	display();                                                                                                //������ʾ����     
	printf("\n");   
	printf("������Ҫɾ����ѧ��������:\n");  
	scanf("%s",name);
	for(flag=1,i=0;flag&&i<m;i++)  
	{    
		if(strcmp(st[i].name,name)==0)   
		{     
			printf("\n���ҵ����ˣ�ԭʼ��¼Ϊ��\n");              
			printf("\nѧ��\t\t����\t�Ա�\t����   \n");     
			printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);                
			printf("\nȷʵҪɾ��������Ϣ�밴1,��ɾ���밴0\n");    
			scanf("%d",&n);              
			if(n==1)                                                                                       //���ɾ��������������Ϣ��������һ��    
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
			printf("\n�Բ��𣬲��޴���!\n");      
			printf("\n ���ɾ���������ѧ����Ϣ:\n");     
			save(m);                                                                                    //���ñ��溯��   
			display();                                                                                  //������ʾ����  
			printf("\n����ɾ���밴1������ɾ���밴0\n");   
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
	
void add()                                                                                                       //��Ӻ���
{   
	FILE*fp;
	int t;
	int n,a;      
	int count=0;     
	int i,j;      
	int m=load();      
	printf("\n ԭ����ѧ����Ϣ:\n");     
	display();                                                                                                //������ʾ����     
	printf("\n");      
	fp=fopen("student_list.txt","a");      
	printf("�����������ӵ�ѧ����:\n");  
	scanf("%d",&n);      
	for (i=m;i<(m+n);i++)   
	{    
		printf("\n ������������ѧ������Ϣ:\n");  
		loop: 
		printf("������ѧ��:  "); 
		scanf("%10d",&st[i].num); 
		printf("����������:  ");      
		scanf("%s",st[i].name);                  
		printf("�������Ա�(F--Ů  M--��):  ");      
		scanf("%s",st[i].sex);         
		printf("����������:  ");      
		scanf("%d",&st[i].age);                 
		printf("\n");      
		count=count+1;    
		printf("�����ӵ�����:\n");      
		printf("%d\n",count);  }      
	    printf("\n������!\n"); m=m+count;   
		printf("\n��ʾ���Ӻ������ѧ����Ϣ:\n");  
		printf("\n");  
		save(m);     
		display();    
		fclose(fp);
		printf("��������밴1,�������˵��밴2\n");    
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
 
void search()                                                                                                   //��ѯ����
{      
	int t,flag;  
	do  
	{      
		//printf("\n��ѧ�Ų�ѯ�밴1 �� ��������ѯ�밴2 �� ���Ա��ѯ�밴3  ,  �������ѯ�밴4�� ������������5\n");
		printf("\n\t*****1--��ѧ�Ų�ѯ******\n");
		printf("\t*****2--��������ѯ******\n");
		printf("\t*****3--���Ա��ѯ******\n");
		printf("\t*****4--�������ѯ******\n");
		printf("\t*****5--�������˵�******\n") ;
		scanf("%d",&t);     
		if(t>=1&&t<=5)     
		{
		   flag=1;     
		   break;     
		}     
	    else     
		{    
			flag=0;     
			printf("����������������ѡ��!");     
		} 
	}      
		while(flag==0);
		while(flag==1)  
		{      
			switch(t)     
			{        
				case 1:printf("��ѧ�Ų�ѯ\n");search_num();break;      
				case 2:printf("��������ѯ\n");search_name();break;      
				case 3:printf("���Ա��ѯ\n");search_sex();break;   
				case 4:printf("�������ѯ\n");search_age();break;      
				case 5:system("cls");break;      
				default:break;     
			} 
			break;     
		} 
}

//***********************************************************************************************************************
  
void search_num()                                                                                                //��ѧ�Ų�ѯ
{    
	int num;   
	int i,t;    
	int m=load();    
	printf("������Ҫ���ҵ�ѧ��:\n");
    scanf("%d",&num);   
	for(i=0;i<m;i++)      
	if(num==st[i].num)  
	{        
		printf("\n���ҵ����ˣ����¼Ϊ��\n");         
		printf("\nѧ��\t\t����\t�Ա�\t����   \n");      
		printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);       
		break;  
	}     
	if(i==m)        
	printf("\n�Բ��𣬲��޴���\n");    
	printf("\n");     
	printf("���ز�ѯ�����밴1,�˳���ѯ�밴2\n");    
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

void search_name()                                                                                             //��������ѯ
{    
	char name[10];   
	int i,t;    
	int m=load();    
	printf("������Ҫ���ҵ�����:\n");   
	scanf("%s",name);   
	for(i=0;i<m;i++)  	    
	if(strcmp(st[i].name,name)==0)  
	{      
		printf("\n���ҵ������¼Ϊ��\n");      
		printf("\nѧ��\t\t����\t�Ա�\t����   \n");  
		printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);
	} 
	if(i==m)   
	//printf("\n�Բ��𣬲��޴���\n");    
	printf("\n"); 
	printf("���ز�ѯ�����밴1,�˳���ѯ�밴2\n");    
	scanf("%d",&t);
	switch(t)   
	{     
		case 1:search();break;       
		case 2:break;    
		default :break;   
	}  
} 

//***********************************************************************************************************************
 
void search_sex()                                                                                                //���Ա��ѯ
{    
	char sex[3];   
	int i, t;    
	int m=load();    
	printf("������Ҫ���ҵ��Ա�:\n");   
	scanf("%s",&sex);   
	for(i=0;i<m;i++)
	{
		if(strcmp(st[i].sex,sex)==0)  
		{        
			printf("\n���ҵ����ˣ����¼Ϊ��\n");         
			printf("\nѧ��\t\t����\t�Ա�\t����  \n");
			printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);
		}
	}
		printf("\n");     
		printf("���ز�ѯ�����밴1,�˳���ѯ�밴2\n");    
		scanf("%d",&t);   
		switch(t)   
		{      
			case 1:search();break;       
			case 2:break;    
			default :break;   
		}   
} 

//***********************************************************************************************************************
 
void search_age()                                                                                              //�������ѯ
{    
	int age;   
	int i, t;    
	int m=load();    
	printf("������Ҫ���ҵ�����:\n");   
	scanf("%d",&age); 
	for(i=0;i<m;i++)
	{
	    if(age==st[i].age)
		{       
			printf("\n���ҵ����ˣ����¼Ϊ��\n");         
			printf("\nѧ��\t\t����\t�Ա�\t����   \n");  
			printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);       
		}
	}
	printf("\n");     
	printf("���ز�ѯ�����밴1,�˳���ѯ�밴2\n");    
	scanf("%d",&t);   
	switch(t)   
	{      
		case 1:search();break;       
		case 2:break;    
		default :break;   
	} 
}  

//***********************************************************************************************************************

void modify()                                                                                                    //�޸ĺ���
{      
	int num;  
	char name[10]; 
    char sex[3];    
	int age;       
	int b,c,i,n,t,flag;    
	int m=load();                                                                                             //�����ļ��ڵ���Ϣ     
	printf("\n ԭ����ѧ����Ϣ:\n");     
	display();                                                                                                //������ʾ���� 
	printf("\n");      
	printf("������Ҫ�޸ĵ�ѧ��������:\n");  
	scanf("%s",name);   
	for(flag=1,i=0;flag&&i<m;i++)  
	{    
		if(strcmp(st[i].name,name)==0)   
		{     
			printf("\n���ҵ����ˣ�ԭʼ��¼Ϊ��\n");              
			printf("\nѧ��\t\t����\t�Ա�\t����   \n");     
			printf("\n%d\t%s\t%s\t%d\n",st[i].num,st[i].name,st[i].sex,st[i].age);                
			printf("\nȷʵҪ�޸Ĵ�����Ϣ�밴1  ���޸��밴0\n");    
			scanf("%d",&n);             
			if(n==1) 
			{                 
				printf("\n��Ҫ�����޸ĵ�ѡ��\n 1.ѧ�� 2.���� 3.�Ա� 4.���� \n");                  
				printf("�����������޸ĵ���һ�����:\n");                  
				scanf("%d",&c);                  
				if(c>8||c<1)             
				printf("\nѡ�����������ѡ��!\n");      
			}           
			flag=0;   
		 }           
	 }     
	 if(flag==1)   
	 printf("\n�Բ��𣬲��޴���!\n");       
	 do    
	 {    
		 switch(c)                                               //��Ϊ���ҵ���i��ѧ��ʱ,for����i�Լ���1,���������Ӧ�ðѸĺ����Ϣ��ֵ����i-1����   
		 {               
		     case 1:printf("ѧ�Ÿ�Ϊ: ");       
			 scanf("%d",&num);st[i-1].num=num;       
			 break;               
			 case 2:printf("������Ϊ: ");          
				 scanf("%s",name);        
				 strcpy(st[i-1].name,name);           
				 break;               
			 case 3:printf("�Ա��Ϊ: ");          
				 getchar();           
				 scanf("%s",&sex);       
				 strcpy(st[i-1].sex,sex);       
				 break;               
			 case 4:printf("�����Ϊ: ");          
				 scanf("%d",&age);                    
				 st[i-1].age=age;       
				 break;
		 }	        
	   printf("\n");    
	   printf("\n�Ƿ�ȷ�����޸ĵ���Ϣ?\n �� �밴1  ��,�����޸� �밴2:  \n"); 
	   scanf("%d",&b);      
	}       
	while(b==2);     
	printf("\n��ʾ�޸ĺ������ѧ����Ϣ:\n");    
	printf("\n");    
	save(m);    
	display();     
	printf("\n�����޸��밴1�������޸��밴0\n");    
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

void baocun()                                                                                               //���溯��
{
	int i;
	int m=load();
	FILE*fp;   
	if ((fp=fopen("D:\\student.txt","w"))==NULL)   
	{    
		printf ("cannot open file\n");      
		exit(0);  
	}
	fprintf(fp,"ѧ��\t\t����\t�Ա�\t����\n");
	fprintf(fp,"--------------------------------------\n");
	for (i=0;i<m;i++)                                                                         //���ڴ���ѧ������Ϣ����������ļ���ȥ
	{ 
		 fprintf(fp,"%d\t %s\t %s\t %d\n",st[i].num,st[i].name,st[i].sex,st[i].age);
	}
	fclose(fp);
	printf("�ļ�����ɹ���");
}
