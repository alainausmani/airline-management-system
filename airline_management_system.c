#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<windows.h>

struct airline
{
	char name[35];
    int destination;
    int b_e;
	int seat_num;
	char email[35];
	struct airline *following;
}
  *begin,*strean,*dummy;
  
 void  cancel(), details();
 void reserve(), display(),savefile(struct airline* ),lines();
 void main()
 {  

 	time_t t;
 	time(&t); //time
 	printf("\n\tDate and Time\n\t%s",ctime(&t));
	int choice,user_manag,Key,trry=1,i;
	begin = strean = NULL;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	for(i=0;i<=10000;i++)
	{
		printf("\r\t\t\t\t\t\tLOADING.....%d%%",i/100);
	}
	system("cls");
	printf("\n\t\t\t**********WELCOME TO FAST AIRLINES**********\n\n");
	printf("\t\t Kindly choose your service side\n");
	printf("\t\t1.For user\n\t\t2.For management");
	scanf("%d",&user_manag);
	system("cls");
	if(user_manag==1)
	{
    do
    {   
	    system("COLOR B0");
	    lines();
   		printf("\t\t\t*******************************************************************");
		printf("\n\t\t\t\t                   AIR TICKETING                  ");
		printf("\n\t\t\t*******************************************************************");
		lines();
		printf("\n\n\n\t\t Please enter your choice from below (1-3):");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. EXIT");
		printf("\n\n\t\t Enter your choice :");
		fflush(stdin);
		scanf("%d",&choice); 
		system("cls");
		switch (choice)
		{
		case 1:
			system("COLOR 80");
			reserve();
			getch();
		    system("cls");
			break;
		case 2:
			system("COLOR 73");
			cancel();
			getch();
			system("cls");
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-3");
			printf("\n\n\t Do not forget to chose from 1-3");
			getch();
			system("cls");
			break;
		}
		getch();
	} while( choice != 4 );	
	
	}
	else if( user_manag == 2 )
	{
	  printf("\n\n\t\t\tEnter Password to login:");	
	  while( Key != 4581 )
	  { 
	 	scanf("\t\t\t%d",&Key);
	 	if(Key == 1234 )
	 	{
	 	 system("cls");
		 break; 	
	 	}
	 	else
	 	{
	 	  if(trry <= 3)	
	 	  {
	 	   printf("\n\t\t\tNot matched! Enter correct password to login.\n");	
	 	   printf("\t\t\tRemaning chances to login : %d\n\n",4-trry);
	 	   printf("\t\t\treinter password:");
		   trry++;	
	 	  }
		  else
		  {
		  printf("\n\t\t\t\tSorry You have Lost all chances\n");
		  exit(0); 	
		  }    	
	 	}
	  }
	 system("COLOR F6");
	 printf("\n\n\t\t\t\tINFORMATION\n");
	 display();
	 getch();
	 system("cls");		
	}

	else
	{
	printf("Sorry entered invalid!");	
	}
}
void lines()
{
	int i=0;
	printf("\n");
	printf("\t\t\t");
	for(i=0;i<67;i++)
	{
		printf("\xcd");
	}
	printf("\n");
}

void details()
{   
	int seat_req,i;
    static int seat_il_b=1,seat_il_e=1,seat_lk_b=1,seat_lk_e=1,seat_ki_b=1,seat_ki_e=1,seat_kl_b=1,seat_kl_e=1;
	static int sum_1b=0,sum_1e=0,sum_2b=0,sum_2e=0,sum_3b=0,sum_3e=0,sum_4b=0,sum_4e=0;
   printf("\n\t\tCITY\t\t TIME\t\tDAY\t\tEconomy Price\t  Buisiness Price\n");
   printf("\t1.karachi to lahore \t 8:30am \tEvery day \tRS.13000 \t     RS.18000\n");
   printf("\t2.islamabad to lahore \t 10:30am \tEvery friday \tRS.16000 \t     RS.19000\n");
   printf("\t3.lahore to karachi \t 1:00pm \tEvery day \tRS.14000 \t     RS.16000\n");
   printf("\t4.karachi to islamabad \t 5:00pm \tEvery sunday \tRS.17000 \t     RS.19000 \n");
   printf("\n\tEnter the Destination:");
   fflush(stdin);
   scanf("\t%d",&strean->destination); 

   if(strean->destination==1)
    {
	    printf("\n\t\t\t1.Business Class\n\t\t\t2.Economy Class.");
	    fflush(stdin);
		scanf("%d",&strean->b_e);
	    if(strean->b_e==1)
		{	
		fflush(stdin);
		printf("\tEnter the number of seats you want:\n");
		scanf("%d",&seat_req);
	   	if(seat_kl_b<=20)
    	{	
    	printf("\t\t\t\tREMANING SEATS ARE %d\n",20-(sum_1b+=seat_req));	
		printf("\t\t\tYou have  to pay %d pkr",18000*seat_req);	
		
		for (i=1 ; i<=seat_req ; i++)
		{	
	    printf("\n\tEnter your name:");
	    fflush(stdin);
	    gets(strean->name); 
	    printf("\n\tEnter your email address:");
		fflush(stdin);	   
	    gets(strean->email);
		while(strchr(strean->email,64)==0)
		{
			printf("\tEnter correct email address!");
			fflush(stdin);
			gets(strean->email);
		}  
    	printf("\n\t Seat booking successful!");
    	lines();
    	printf("\t\t\t***********BOARDING PASS**********\n ");
    	printf("\n\t\t\tyour seat number is: Seat A-%d\n",seat_kl_b);
		printf("\t\t\t>You're allowed to carry 20kg bagguage\n\t\t\t>Food and drinks will be given as compulsory.\n\t\t\t>No smoking on board.\n\t\t\t>Have a safe journey!\n");
		lines();
		strean->seat_num=seat_kl_b;
		seat_kl_b++;
		savefile(strean);
	    }	
		}
		else 
		{
	   	printf("\t\t*******************\n");
	    printf("\t\t  %c<SEATS FULL>%c\n",2,2);
	    printf("\t\t*******************\n");
	    getch();
		system("cls");
	    }     
	
	    }
	    else if(strean->b_e==2)
	    {
	    printf("\tEnter the number of seats you want:\n");
	    fflush(stdin);
		scanf("%d",&seat_req);
	   	if(seat_kl_e<=20)
    	{	
    	printf("\t\t\t\tREMANING SEATS ARE %d\n",20-(sum_1e+=seat_req));	
		printf("\t\t\tYou have  to pay %d pkr",13000*seat_req);
    	for(i=1 ; i<=seat_req ; i++)
		{
	    printf("\n\tEnter your name:");
	    fflush(stdin);
	    gets(strean->name);
	    printf("\n\tEnter your email address:");
		fflush(stdin);	   
	    gets(strean->email); 
	    while(strchr(strean->email,64)==0)
		{
			printf("\tEnter correct email address!");
			fflush(stdin);
			gets(strean->email);
		}
    	printf("\n\t Seat booking successful!");
    	lines();
    	printf("\t\t\t\t\t***********BOARDING PASS**********\n ");
		printf("\n\t\t\t your seat number is: Seat A-%d\n",seat_kl_e);
		printf("\t\t\t>You're allowed to carry 20kg bagguage\n\t\t\t>Food and drinks will be given as compulsory.\n\t\t\t>No smoking on board.\n\t\t\t>Have a safe journey!\n");
		lines();
		strean->seat_num = seat_kl_e;
		seat_kl_e++;
		savefile(strean);
	    }
    	}
		else 
		{
	   	printf("\t\t*******************\n");
	    printf("\t\t  %c<SEATS FULL>%c\n",2,2);
	    printf("\t\t*******************\n");
	    getch();
		system("cls");
	    }     
	
	    }
	
    }
    else if(strean->destination==2)
    {  
       printf("\n\t\t\t1.Business Class\n\t\t\t2.Economic Class.");
	   fflush(stdin);
	   scanf("%d",&strean->b_e);
	   if(strean->b_e==1)
	   {
	   fflush(stdin);	
	   printf("\tEnter the number of seats you want:\n");
	   scanf("%d",&seat_req);
       if(seat_il_b<=30)
       {
       printf("\t\t\t\tREMANING SEATS ARE %d\n",30-(sum_2b+=seat_req));	
       printf("\t\t\tYou have  to pay %d pkr",19000*seat_req);
	   for(i=1 ; i<=seat_req ; i++)
	   {
	   printf("\n\t Enter your name:");
	   fflush(stdin);
	   gets(strean->name); 
	   printf("\n\t Enter your email address:");
	   fflush(stdin); 
	   gets(strean->email);
	   while(strchr(strean->email,64)==0)
	   {
			printf("\tEnter correct email address!");
			fflush(stdin);
			gets(strean->email);
	   }		
       printf("\n\t Seat booking successful!");
       lines();
       printf("\t\t\t\t\t***********BOARDING PASS**********\n ");
	   printf("\n\t\t\t your seat number is: Seat A-%d\n",seat_il_b);
	   printf("\t\t\t>You're allowed to carry 20kg bagguage\n\t\t\t>Food and drinks will be given as compulsory.\n\t\t\t>No smoking on board.\n\t\t\t>Have a safe journey!\n");
	   lines();
	   strean->seat_num = seat_il_b;
	   seat_il_b++;
	   savefile(strean);
       }
       }
       else
	   {
	   	printf("\t\t******************\n");
	    printf("\t\t  %c<SEATS FULL>%c\n",2,2);
	    printf("\t\t******************\n");
	   } 
	   }
	   else if(strean->b_e==2)
	   {
	   fflush(stdin);
	   printf("\tEnter the number of seats you want:\n");
	   scanf("%d",&seat_req);
       if(seat_il_e<=30)
       {
       printf("\t\t\t\tREMANING SEATS ARE %d\n",30-(sum_2e+=seat_req));	
       printf("\t\t\tYou have  to pay %d pkr",16000*seat_req);
	   for(i=1 ; i<=seat_req ; i++)
	   {
	   printf("\n\t Entter your name:");
	   fflush(stdin);
	   gets(strean->name); 
	   printf("\n\t Enter your email address:");
	   fflush(stdin); 
	   gets(strean->email);
	   while(strchr(strean->email,64)==0)
	   {
			printf("\tEnter correct email address!");
		    fflush(stdin);
			gets(strean->email);
	   }	
       printf("\n\t Seat booking successful!");
       lines();
       printf("\t\t\t\t\t***********BOARDING PASS**********\n ");
	   printf("\n\t\t\t your seat number is: Seat A-%d\n",seat_il_e);
	   printf("\t\t\t>You're allowed to carry 20kg bagguage\n\t\t\t>Food and drinks will be given as compulsory.\n\t\t\t>No smoking on board.\n\t\t\t>Have a safe journey!\n");
	   lines();
	   strean->seat_num = seat_il_e;
       seat_il_e++;
       savefile(strean);
	   }
       }
       else
	   {
	   	printf("\t\t******************\n");
	    printf("\t\t  %c<SEATS FULL>%c\n",2,2);
	    printf("\t\t******************\n");
	   } 
	   }
    }
       
    else if(strean->destination==3)
    {   
        fflush(stdin);
        printf("\n\t\t\t1.Business\n\t\t\t2.Economic Class.");
		scanf("%d",&strean->b_e);
        if(strean->b_e==1)
        {
        fflush(stdin);
		printf("\tEnter the number of seats you want:\n");
		scanf("%d",&seat_req);
		if(seat_kl_b<=15)
    	{
    	printf("\t\t\t\tREMANING SEATS ARE %d\n",15-(sum_3b+=seat_req));	
    	printf("\t\t\tYou have  to pay %d pkr",16000*seat_req);
	    for(i=1 ; i<=seat_req ; i++)
	    {
	    printf("\n\t Enter your name:");
	    fflush(stdin);
	    gets(strean->name); 
	    fflush(stdin);
	    printf("\n\t Enter your email address:");
	    gets(strean->email); 	
    	while(strchr(strean->email,64)==0)
		{
			printf("\tEnter correct email address!");
	        fflush(stdin);
			gets(strean->email);
		}	
    	printf("\n\t Seat booking successful!");
    	lines();
    	printf("\t\t\t\t\t***********BOARDING PASS**********\n ");
		printf("\n\t\t\t your seat number is: Seat A-%d\n",seat_kl_b);
	    printf("\t\t\t>You're allowed to carry 20kg bagguage\n\t\t\t>Food and drinks will be given as compulsory.\n\t\t\t>No smoking on board.\n\t\t\t>Have a safe journey!\n");
		lines();
		strean->seat_num =seat_lk_b;
		seat_kl_b++;
		savefile(strean);
        }
    	}
		else
		{
	   	printf("\t\t******************\n");
	    printf("\t\t  %c<SEATS FULL>%c\n",2,2);
	    printf("\t\t******************\n");
		}    	
        }
        else if(strean->b_e==2)
        {
         fflush(stdin);
		 printf("\tEnter the number of seats you want:\n");
		 scanf("%d",&seat_req);
		if(seat_lk_e<=15)
    	{
    	printf("\t\t\t\tREMANING SEATS ARE %d\n",15-(sum_3e+=seat_req));	
    	printf("\t\t\tYou have  to pay %d pkr",14000*seat_req);
	    for(i=1 ; i<=seat_req ; i++)
	    {
	    printf("\n\t Enter your name:");
	    fflush(stdin);
		gets(strean->name); 
	    fflush(stdin);
	    printf("\n\t Enter your email address:");
	    gets(strean->email);
		while(strchr(strean->email,64)==0)
		{
			printf("\tEnter correct email address!");
			fflush(stdin);
			gets(strean->email);
		} 	
    	printf("\n\t Seat booking successful!");
    	lines();
    	printf("\t\t\t\t\t***********BOARDING PASS**********\n ");
		printf("\n\t\t\t your seat number is: Seat A-%d\n",seat_lk_e);
		printf("\t\t\t>You're allowed to carry 20kg bagguage\n\t\t\t>Food and drinks will be given as compulsory.\n\t\t\t>No smoking on board.\n\t\t\t>Have a safe journey!\n");
		lines();
		strean->seat_num =seat_lk_e;
	    seat_lk_e++;
	    savefile(strean);
		}
    	}
		else
		{
	   	printf("\t\t******************\n");
	    printf("\t\t  %c<SEATS FULL>%c\n",2,2);
	    printf("\t\t******************\n");
		}    		
        }
    }
    else if(strean->destination==4)
    {  
       fflush(stdin);
       printf("\n\t\t\t1.Business Class\n\t\t\t2.Economic Class.");
       scanf("%d",&strean->b_e);
       if(strean->b_e==1)
       {
	   fflush(stdin);
       printf("\tEnter the number of seats you want:\n");
	   scanf("%d",&seat_req);
	   if(seat_kl_b<=22)
       {
       printf("\t\t\t\tREMANING SEATS ARE %d\n",22-(sum_4b+=seat_req));
	   printf("\t\t\tYou have  to pay %d pkr",19000*seat_req);
	   for(i=1 ; i<=seat_req ; i++)
	   {
	   printf("\n\t Enter your name:");
	   fflush(stdin);
	   gets(strean->name); 
	   printf("\n\t Enter your email address:");
	   fflush(stdin);
	   gets(strean->email);
	   while(strchr(strean->email,64)==0)
	   {
			printf("\tEnter correct email address!");
			fflush(stdin);
			gets(strean->email);
	   } 
       printf("\n\t Seat booking successful!");
       lines();
       printf("\t\t\t\t\t***********BOARDING PASS**********\n ");
	   printf("\n\t\t\t your seat number is: Seat A-%d\n",seat_ki_b);
	   printf("\t\t\t>You're allowed to carry 20kg bagguage\n\t\t\t>Food and drinks will be given as compulsory.\n\t\t\t>No smoking on board.\n\t\t\t>Have a safe journey!\n");
	   lines();
	   strean->seat_num =seat_ki_b;
	   seat_ki_b++;
	   savefile(strean);
	   }
       }
       else 
       {
	   printf("\t\t*******************\n");
	   printf("\t\t  %c<SEATS FULL>%c\n",2,2);
	   printf("\t\t*******************\n");
	   }  
       }
       else if(strean->b_e==2)
       {
       	fflush(stdin);
       	printf("\tEnter the number of seats you want:\n");
		scanf("%d",&seat_req);
	   if(seat_ki_e<=22)
       {
       printf("\t\t\t\tREMANING SEATS ARE %d\n",22-(sum_4e+=seat_req));
	   printf("\t\t\tYou have  to pay %d pkr",17000*seat_req);	
       for(i=1 ; i<=seat_req ; i++)
	   {  
	   printf("\n\t Enter your name:");
	   fflush(stdin);
	   gets(strean->name); 
	   printf("\n\t Enter your email address:");
	   fflush(stdin);
	   gets(strean->email); 
       while(strchr(strean->email,64)==0)
	   {
			printf("\tEnter correct email address!");
			fflush(stdin);
			gets(strean->email);
	   }		
       printf("\n\t Seat booking successful!");
       lines();
       printf("\t\t\t\t\t***********BOARDING PASS**********\n ");
	   printf("\n\t\t\t your seat number is: Seat A-%d\n",seat_ki_e);
	   printf("\t\t\t>You're allowed to carry 20kg bagguage\n\t\t\t>Food and drinks will be given as compulsory.\n\t\t\t>No smoking on board.\n\t\t\t>Have a safe journey!\n");
	   lines();
	   strean->seat_num =seat_ki_e;
   	   seat_ki_e++;
   	   savefile(strean);
	   }
       }
       else 
       {
	   printf("\t\t*******************\n");
	   printf("\t\t  %c<SEATS FULL>%c\n",2,2);
	   printf("\t\t*******************\n");
	   }  

       }
    }
	else 
    {   printf("\t*********************************\n");
    	printf("\tNO FLIGHT FOR THIS DESTINATION.%c\n",1);
    	printf("\t*********************************\n");
    	
    }
}


void reserve()
{
	strean = begin;
	if ( begin == NULL)
	{
		               // FOR first user
		begin = strean = (struct airline*)malloc(sizeof(struct airline));
		details();
		strean->following = NULL;
	}
	else
	{

		while (strean->following)
		strean = strean->following;
		strean->following = (struct airline *)malloc(sizeof(struct airline));
		strean = strean->following;
		details();
		strean->following = NULL;
	}
	return;
}

 void savefile(struct airline *strean) 
{   
	FILE *fpointer = fopen("air_records.txt","a");
	if (!fpointer)
	{  
		printf("\n Error in opening file!");
		Sleep(800);
		return;
	}
		fprintf(fpointer,"%s   %s   %d   %d    %d",strean->email,strean->name,strean->destination,strean->b_e,strean->seat_num);
		fprintf(fpointer, "\n");
		strean = strean->following;
	    fclose(fpointer);
	    return;
}

void cancel()
{
	
	FILE *fpointer = fopen("air_records.txt","r");
	if (!fpointer)
	{  
	 printf("\n Error in opening file!");
	 Sleep(800);
	 return;
	}
	FILE *fcal=fopen("cope.txt","w");
	if(!fcal)
	{
		fclose(fpointer);
		return ;
	}
	
	char name[50],ch2[50],nam[50],em[50];
	int c1,c2,c3,s=0;
	printf("\n\n\t\t\tEnter email to delete record:");
	fflush(stdin);
	gets(em);
	while(!feof(fpointer))
	{
		fscanf(fpointer,"%s %s %d %d %d",ch2,name,&c1,&c2,&c3);
		if((strcmp(ch2,em)!=0))
		{
		       if(!feof(fpointer))
			   {
			    fprintf(fcal,"%s    %s    %d   %d   %d\n",ch2,name,c1,c2,c3);	
			   }	
		}
		else{
		s++;
		}
	}
	if(s==0)
	printf("\n\t\t\t\t\t NOT FOUND!");
	
	fclose(fpointer);
	fclose(fcal);
	remove("air_records.txt");
	rename("cope.txt","air_records.txt");
	return;
}

void display()
{
	FILE *fpointer = fopen("air_records.txt","r");
	if(!fpointer)
	{  
	 printf("\n Error in opening file!");
	 Sleep(800);
	 return;
	}
	strean = begin;
	struct airline *a=(struct airline*)malloc(sizeof(struct airline));
	while(fscanf(fpointer, "%s", a->email)!=EOF)
    {
	 fscanf(fpointer, "%s", a->name);
     fscanf(fpointer, "%d",&a->destination);
     fscanf(fpointer, "%d",&a->b_e);
     fscanf(fpointer, "%d",&a->seat_num);
     
     printf("\t----------------------------------------");
     printf("\n\t\t Email : %s\n",a->email);
     printf("\n\t\t Name  : %s\n",a->name);
     printf("\n\t\t Destination : %d\n",a->destination);
     printf("\n\t\t Flight Class : %d\n",a->b_e);
     printf("\n\t\t Seat no : %d\n",a->seat_num);
	}
	 fclose(fpointer);
	 return;
}
