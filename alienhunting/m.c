#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"l.c"
#define tr "\033[0;31m"
#define tg "\033[0;32m"
#define ty "\033[0;33m"
#define tb "\033[0;34m"
#define tp "\033[0;35m"
#define tc "\033[0;36m"
#define tw "\033[0;37m"
#define rs "\033[0;0m"
int how(int ,int);
int wow(int ,int);
int hi(int ,int);
int are(int ,int);
int you(int,int);
int fine(int,int);
int wrning(int);
int usr_input();
int newline(int n);
int round2(int count,int life)
{
	system("clear");
	register int x,j;
	int i,u,v,w,o,p;
	srand((unsigned long int )&i);
        wow(count,life);
	for(i=0;i<45;i++)
	{
	   for(int j=0;j<100;j++)
        	 x=rand()%5+1;
	if(x==1)
	{
	      u=hi(count,life);
		if(u==1)
		  count++;
		else
		   life--;

		if(count==20)
			super(count);
              
		if(life==0)
		    wrning(count);
		else
	        wow(count,life);
	}
	else if(x==2)
	{
	 v=how(count,life);
		if(v==2)
		  count++;
		else
		   life--;
		
		if(count==20)
			super(count);

		if(life==0)
		    wrning(count);
		else
	        wow(count,life);
	}
	else if(x==3)
	{
	w=are(count,life);
		if(w==3)
		  count++;
		else
		  life--;
		
		if(count==20)
			super(count);

		if(life==0)
		    wrning(count);
		else
	        wow(count,life);
	}
	else if(x==4)
	{
    	o=you(count,life);
		if(o==4)
		   count++;
		else
		   life--;
		
		if(count==20)
			super(count);

		if(life==0)
		    wrning(count);
		else
	        wow(count,life);
		
	}
	else
	{
		p=fine(count,life);
		if(p==5)
		  count++;
		else
		  life--;
		
		if(count==20)
			super(count);

		if(life==0)
			wrning(count);
		else
			wow(count,life);
	}
     }
}

int wow(int d,int b)
{
	int y,i;
	for(i=0;i<b;i++)
	printf("💚 ");
      printf(tw"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\n"rs,d);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"        █▀█▀█▒█▀█▒▒█▀█▒▄███▄ \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"       ░█▀█▀█░█▀██░█▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"       ░█▀█▀█░█▀████▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"       ████████▀█████████████\n"rs);
        printf("\t\t\t\t\t                                                                   \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                  █▀█                  \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                  ░▄▀                  \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                  █▄▄                \n"rs);
      	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(tp"\t\t\t        ▄█▀▄          "rs tc"                ▄       ▄█▄       ▄       "rs tg"             ───║─▄──▄──▄──▄──║────\n");
      printf(tp"\t\t\t      ▄██▀▀▀▀▄        "rs tc"               ▐█▌  ▄  █████  ▄  ▐█▌      "rs tg"             ───║─▓──▓──▓──▓──║────\n");
      printf(tp"\t\t\t    ▄███▀▀▀▀▀▀▀▄      "rs tc"                █  ███▄▄███▄▄███  █       "rs tg"             ───░░░░░░░░░░░░░─║────\n");
      printf(tp"\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄    "rs tc"               ░█░░█▄█▄█▀▒▀█▄█▄█░░█░      "rs tg"             ▀███████████████████──\n");
      printf(tp"\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄  "rs tc"               ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██     ░"rs tg"░            ░██████████████████▀░░\n");
        printf("\t\t\t                                                                                                   \n");
      printf(tr"\t\t\t      ▀▀█                                    █ █░                                     █▀▀          \n");
      printf(tr"\t\t\t      ░▀▄                                    █▄█▄                                     ▀▀▄          \n");
      printf(tr"\t\t\t      ▄▄█                                    ░░█░                                     ▄▄▀          \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
        sleep(2);
	system("clear");
}

int hi(int d,int b)
{
         int y,i;
	for(i=0;i<b;i++)
	printf("💚 ");
       printf(tw"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\n"rs,d);
       printf(tr"\t\t\t\t\t      ▒▐███████▌                                                 \n"rs);
       printf(tr"\t\t\t\t\t ▒▒▒▒▒▒▐░▀░▀░▀░▌                                                 \n"rs);
       printf(tr"\t\t\t\t\t ▒▒▒▒▒▒▐▄▄▄▄▄▄▄▌                                                 \n"rs);
       printf(tr"\t\t\t\t\t ▄▀▀▀█▒▐░▀▀▄▀▀░▌▒█▀▀▀▄                                           \n"rs);
       printf(tr"\t\t\t\t\t ▌▌▌▌▐▒▄▌░▄▄▄░▐▄▒▌▐▐▐▐                                           \n"rs);
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"        █▀█▀█▒█▀█▒▒█▀█▒▄███▄ \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"       ░█▀█▀█░█▀██░█▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"       ░█▀█▀█░█▀████▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"       ████████▀█████████████\n"rs);
        printf("\t\t\t\t\t                                                                   \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                  █▀█                  \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                  ░▄▀                  \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                  █▄▄                \n"rs);
      	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(tp"\t\t\t        ▄█▀▄          "rs tc"                ▄       ▄█▄       ▄       "rs tg"             ───║─▄──▄──▄──▄──║────\n");
      printf(tp"\t\t\t      ▄██▀▀▀▀▄        "rs tc"               ▐█▌  ▄  █████  ▄  ▐█▌      "rs tg"             ───║─▓──▓──▓──▓──║────\n");
      printf(tp"\t\t\t    ▄███▀▀▀▀▀▀▀▄      "rs tc"                █  ███▄▄███▄▄███  █       "rs tg"             ───░░░░░░░░░░░░░─║────\n");
      printf(tp"\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄    "rs tc"               ░█░░█▄█▄█▀▒▀█▄█▄█░░█░      "rs tg"             ▀███████████████████──\n");
      printf(tp"\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄  "rs tc"               ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██     ░"rs tg"░            ░██████████████████▀░░\n");
        printf("\t\t\t                                                                                                   \n");
      printf(tr"\t\t\t      ▀▀█                                    █ █░                                     █▀▀          \n");
      printf(tr"\t\t\t      ░▀▄                                    █▄█▄                                     ▀▀▄          \n");
      printf(tr"\t\t\t      ▄▄█                                    ░░█░                                     ▄▄▀          \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
            y=usr_input();
            return y;	    

      
}

int how(int d,int b)
{

	int y,i;
	for(i=0;i<b;i++)
	printf("💚 ");
      printf(tw"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\n"rs,d);
      printf(tg"\t\t\t\t\t                                           ▒  ▐███████▌           \n"rs);
      printf(tg"\t\t\t\t\t ▒▒▒▒▒                                       ▒▐░▀░▀░▀░▌           \n"rs);
      printf(tg"\t\t\t\t\t                                      ▒▒  ▒▒▒▒▐▄▄▄▄▄▄▄▌           \n"rs);
      printf(tg"\t\t\t\t\t                                        ▄▀▀▀█▒▐░▀▀▄▀▀░▌▒█▀▀▀▄     \n"rs);
      printf(tg"\t\t\t\t\t                                        ▌▌▌▌▐▒▄▌░▄▄▄░▐▄▒▌▐▐▐▐     \n"rs);
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"        █▀█▀█▒█▀█▒▒█▀█▒▄███▄ \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"       ░█▀█▀█░█▀██░█▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"       ░█▀█▀█░█▀████▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"       ████████▀█████████████\n"rs);
        printf("\t\t\t\t\t                                                                   \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                  █▀█                  \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                  ░▄▀                  \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                  █▄▄                \n"rs);
      	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(tp"\t\t\t        ▄█▀▄          "rs tc"                ▄       ▄█▄       ▄       "rs tg"             ───║─▄──▄──▄──▄──║────\n");
      printf(tp"\t\t\t      ▄██▀▀▀▀▄        "rs tc"               ▐█▌  ▄  █████  ▄  ▐█▌      "rs tg"             ───║─▓──▓──▓──▓──║────\n");
      printf(tp"\t\t\t    ▄███▀▀▀▀▀▀▀▄      "rs tc"                █  ███▄▄███▄▄███  █       "rs tg"             ───░░░░░░░░░░░░░─║────\n");
      printf(tp"\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄    "rs tc"               ░█░░█▄█▄█▀▒▀█▄█▄█░░█░      "rs tg"             ▀███████████████████──\n");
      printf(tp"\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄  "rs tc"               ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██     ░"rs tg"░            ░██████████████████▀░░\n");
        printf("\t\t\t                                                                                                   \n");
      printf(tr"\t\t\t      ▀▀█                                    █ █░                                     █▀▀          \n");
      printf(tr"\t\t\t      ░▀▄                                    █▄█▄                                     ▀▀▄          \n");
      printf(tr"\t\t\t      ▄▄█                                    ░░█░                                     ▄▄▀          \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
     y=usr_input();
     return y; 
}

int are(int d,int b)
{

	int y,i;
	for(i=0;i<b;i++)
	printf("💚 ");
      printf(tw"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\n"rs,d);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                                                             \n");
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"        █▀█▀█▒█▀█▒▒█▀█▒▄███▄                                       \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"       ░█▀█▀█░█▀██░█▀█░█▄█▄█                                       \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"       ░█▀█▀█░█▀████▀█░█▄█▄█                                       \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"       ████████▀█████████████                                      \n"rs);
        printf("\t\t\t\t\t                                                                                                           \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                  █▀█                                                        \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                  ░▄▀                                                        \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                  █▄▄                                                        \n"rs);
	printf("\t\t\t\t\t                                                                                                           \n");
      printf(tb"\t\t\t   ▒  ▐███████▌                                                                                                \n"rs);
      printf(tb"\t\t\t     ▒▐░▀░▀░▀░▌                                                                                                \n"rs);
      printf(tb"\t\t\t     ▒▐▄▄▄▄▄▄▄▌                                                                                                \n"rs);
      printf(tb"\t\t\t▄▀▀▀█▒▐░▀▀▄▀▀░▌▒█▀▀▀▄                                                                                          \n"rs);
      printf(tb"\t\t\t▌▌▌▌▐▒▄▌░▄▄▄░▐▄▒▌▐▐▐▐                                                                                          \n"rs);
      printf(tp"\t\t\t        ▄█▀▄          "rs tc"                ▄       ▄█▄       ▄       "rs tg"             ───║─▄──▄──▄──▄──║────\n");
      printf(tp"\t\t\t      ▄██▀▀▀▀▄        "rs tc"               ▐█▌  ▄  █████  ▄  ▐█▌      "rs tg"             ───║─▓──▓──▓──▓──║────\n");
      printf(tp"\t\t\t    ▄███▀▀▀▀▀▀▀▄      "rs tc"                █  ███▄▄███▄▄███  █       "rs tg"             ───░░░░░░░░░░░░░─║────\n");
      printf(tp"\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄    "rs tc"               ░█░░█▄█▄█▀▒▀█▄█▄█░░█░      "rs tg"             ▀███████████████████──\n");
      printf(tp"\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄  "rs tc"               ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██     ░"rs tg"░            ░██████████████████▀░░\n");
        printf("\t\t\t                                                                                                   \n");
      printf(tr"\t\t\t      ▀▀█                                    █ █░                                     █▀▀          \n");
      printf(tr"\t\t\t      ░▀▄                                    █▄█▄                                     ▀▀▄          \n");
      printf(tr"\t\t\t      ▄▄█                                  ░  ░█░                                     ▄▄▀          \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
      y=usr_input();
      return y; 
}
int you(int d,int b)
{

	int y,i;
	for(i=0;i<b;i++)
	printf("💚 ");
      printf(tw"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\n"rs,d);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                                                             \n");
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"        █▀█▀█▒█▀█▒▒█▀█▒▄███▄                                       \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"       ░█▀█▀█░█▀██░█▀█░█▄█▄█                                       \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"       ░█▀█▀█░█▀████▀█░█▄█▄█                                       \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"       ████████▀█████████████                                      \n"rs);
        printf("\t\t\t\t\t                                                                                                           \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                  █▀█                                                        \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                  ░▄▀                                                        \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                  █▄▄                                                        \n"rs);
	printf("\t\t\t\t\t                                                                                                           \n");
      printf(tp"\t\t\t   ▒                                       ▐███████▌                                                             \n"rs);
      printf(tp"\t\t\t                                          ▒▐░▀░▀░▀░▌                                                             \n"rs);
      printf(tp"\t\t\t                                          ▒▐▄▄▄▄▄▄▄▌                                                             \n"rs);
      printf(tp"\t\t\t                                     ▄▀▀▀█▒▐░▀▀▄▀▀░▌▒█▀▀▀▄                                                       \n"rs);
      printf(tp"\t\t\t                                     ▌▌▌▌▐▒▄▌░▄▄▄░▐▄▒▌▐▐▐▐                                                       \n"rs);
      printf(tp"\t\t\t        ▄█▀▄          "rs tc"                ▄       ▄█▄       ▄       "rs tg"             ───║─▄──▄──▄──▄──║────\n");
      printf(tp"\t\t\t      ▄██▀▀▀▀▄        "rs tc"               ▐█▌  ▄  █████  ▄  ▐█▌      "rs tg"             ───║─▓──▓──▓──▓──║────\n");
      printf(tp"\t\t\t    ▄███▀▀▀▀▀▀▀▄      "rs tc"                █  ███▄▄███▄▄███  █       "rs tg"             ───░░░░░░░░░░░░░─║────\n");
      printf(tp"\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄    "rs tc"               ░█░░█▄█▄█▀▒▀█▄█▄█░░█░      "rs tg"             ▀███████████████████──\n");
      printf(tp"\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄  "rs tc"               ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██     ░"rs tg"░            ░██████████████████▀░░\n");
        printf("\t\t\t                                                                                                   \n");
      printf(tr"\t\t\t      ▀▀█                                    █ █░                                     █▀▀          \n");
      printf(tr"\t\t\t      ░▀▄                                    █▄█▄                                     ▀▀▄          \n");
      printf(tr"\t\t\t      ▄▄█                                    ░░█░                                     ▄▄▀          \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
      y=usr_input();
      return y; 
}
int fine(int d,int b)
{

	int y,i;
		for(i=0;i<b;i++)
	printf("💚 ");
      printf(tw"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\n"rs,d);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                                                             \n");
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"        █▀█▀█▒█▀█▒▒█▀█▒▄███▄                                       \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"       ░█▀█▀█░█▀██░█▀█░█▄█▄█                                       \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"       ░█▀█▀█░█▀████▀█░█▄█▄█                                       \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"       ████████▀█████████████                                      \n"rs);
        printf("\t\t\t\t\t                                                                                                           \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                  █▀█                                                        \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                  ░▄▀                                                        \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                  █▄▄                                                        \n"rs);
	printf("\t\t\t\t\t                                                                                                           \n");
      printf(tc"\t\t\t   ▒                                                                               ▐███████▌                     \n"rs);
      printf(tc"\t\t\t                                                                                  ▒▐░▀░▀░▀░▌                     \n"rs);
      printf(tc"\t\t\t                                                                                  ▒▐▄▄▄▄▄▄▄▌                     \n"rs);
      printf(tc"\t\t\t                                                                             ▄▀▀▀█▒▐░▀▀▄▀▀░▌▒█▀▀▀▄               \n"rs);
      printf(tc"\t\t\t                                                                             ▌▌▌▌▐▒▄▌░▄▄▄░▐▄▒▌▐▐▐▐               \n"rs);
      printf(tp"\t\t\t        ▄█▀▄          "rs tc"                ▄       ▄█▄       ▄       "rs tg"             ───║─▄──▄──▄──▄──║────\n");
      printf(tp"\t\t\t      ▄██▀▀▀▀▄        "rs tc"               ▐█▌  ▄  █████  ▄  ▐█▌      "rs tg"             ───║─▓──▓──▓──▓──║────\n");
      printf(tp"\t\t\t    ▄███▀▀▀▀▀▀▀▄      "rs tc"                █  ███▄▄███▄▄███  █       "rs tg"             ───░░░░░░░░░░░░░─║────\n");
      printf(tp"\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄    "rs tc"               ░█░░█▄█▄█▀▒▀█▄█▄█░░█░      "rs tg"             ▀███████████████████──\n");
      printf(tp"\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄  "rs tc"               ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██     ░"rs tg"░            ░██████████████████▀░░\n");
        printf("\t\t\t                                                                                                   \n");
      printf(tr"\t\t\t      ▀▀█                                    █ █░                                     █▀▀          \n");
      printf(tr"\t\t\t      ░▀▄                                    █▄█▄                                     ▀▀▄          \n");
      printf(tr"\t\t\t      ▄▄█                                  ░  ░█░                                     ▄▄▀          \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
	printf("\t\t\t\t\t                                                                                           \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
                      y=usr_input();
		      return y;
}
       
int wrning(int count)
{
	int i=0;
	for(i=0;i<15;i++)
	{
        if((i%2)==0)
	{	

	system("clear");
	newline(15);
	printf(tc"\t\tyour score="tw"%d\n"rs tc"\t\t\t\t\t\t\t\t\t\t\t\t\t\thigh score="tw"75"rs,count);
        printf("\n");
	printf(tr"\t\t\t\t░██████╗░░█████╗░███╗░░░███╗███████╗   █████╗░██╗░░░██╗███████╗██████╗░\n");
        printf(tb"\t\t\t\t██╔════╝░██╔══██╗████╗░████║██╔════╝  ██╔══██╗██║░░░██║██╔════╝██╔══██╗\n");
        printf(tp"\t\t\t\t██║░░██╗░███████║██╔████╔██║█████╗░   ██║░░██║╚██╗░██╔╝█████╗░░██████╔╝\n");
        printf(tc"\t\t\t\t██║░░╚██╗██╔══██║██║╚██╔╝██║██╔══╝░░  ██║░░██║░╚████╔╝░██╔══╝░░██╔══██╗\n");
        printf(tg"\t\t\t\t╚██████╔╝██║░░██║██║░╚═╝░██║███████╗  ╚█████╔╝░░╚██╔╝░░███████╗██║░░██║\n");
        printf(ty"\t\t\t\t░╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝  ░╚════╝░░░░╚═╝░░░╚══════╝╚═╝░░╚═╝\n");
	sleep(1);
	}
	else
	{	
	system("clear");
	newline(15);
	printf(tc"\t\tyour score="tw"%d\n"rs tc"\t\t\t\t\t\t\t\t\t\t\t\t\t\thigh score="tw"75"rs,count);
        printf("\n");
	printf(tp"\t\t\t\t░██████╗░░█████╗░███╗░░░███╗███████╗  ░█████╗░██╗░░░██╗███████╗██████╗░\n");
        printf(tg"\t\t\t\t██╔════╝░██╔══██╗████╗░████║██╔════╝  ██╔══██╗██║░░░██║██╔════╝██╔══██╗\n");
        printf(tr"\t\t\t\t██║░░██╗░███████║██╔████╔██║█████╗░   ██║░░██║╚██╗░██╔╝█████╗░░██████╔╝\n");
        printf(tg"\t\t\t\t██║░░╚██╗██╔══██║██║╚██╔╝██║██╔══╝░   ██║░░██║░╚████╔╝░██╔══╝░░██╔══██╗\n");
        printf(ty"\t\t\t\t╚██████╔╝██║░░██║██║░╚═╝░██║███████╗  ╚█████╔╝░░╚██╔╝░░███████╗██║░░██║\n");
        printf(tc"\t\t\t\t░╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝  ░╚════╝░░░░╚═╝░░░╚══════╝╚═╝░░╚═╝\n");
	sleep(1);
	}
	}
	exit(0);
}

int usr_input()
{
     register int count=0;
    fd_set rfds;
    struct timeval tv;
    register int retval;
     int input = 0;
    tv.tv_sec = 2;
    tv.tv_usec = 0;
    FD_ZERO(&rfds);
    FD_SET(STDIN_FILENO, &rfds);
    retval = select(STDIN_FILENO + 1, &rfds, NULL, NULL, &tv);
    if (retval == -1)
    {
        perror("select()");
        exit(EXIT_FAILURE);
    } 
    else if (retval == 0) 
	    count++;
     else
	     scanf("%d", &input);
    
     system("clear");
    return input;
}

int newline(int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("\n");
}
