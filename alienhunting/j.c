#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include"k.c"
#define tr "\033[0;31m"
#define tg "\033[0;32m"
#define ty "\033[0;33m"
#define tb "\033[0;34m"
#define tp "\033[0;35m"
#define tc "\033[0;36m"
#define tw "\033[0;37m"
#define rs "\033[0;0m"
int user_input();
void newlines(int n);
int start(int ,int );
int one(int ,int );
int two(int,int  );
int three(int ,int);
int four(int ,int);
int warning(int);
int ondru()
{

	system("clear");
	register int x,j,count=0,life=3;
	int i,u,v,w,o;
	srand((unsigned long int )&i);
        start(count,life);
	for(i=0;i<25;i++)
	{
	   for(int j=0;j<100;j++)
        	 x=rand()%4+1;
	if(x==1)
	{
	      u=one(count,life);
		if(u==1)
		  count++;
		else
		   life--;
                
		if(count==10)
			won(count,life);

		if(life==0)
		    warning(count);
                else
	        start(count,life);
	}
	else if(x==2)
	{
	 v=two(count,life);
		if(v==2)
		  count++;
		else
		   life--;

		if(count==10)
			won(count,life);

		if(life==0)
		    warning(count);
		else
	        start(count,life);
	}
	else if(x==3)
	{
	w=three(count,life);
		if(w==3)
		  count++;
		else
		  life--;

		if(count==10)
			won(count,life);

		if(life==0)
		    warning(count);
		else
	        start(count,life);
	}
	else
	{
    	o=four(count,life);
		if(o==4)
		   count++;
		else
		   life--;

		if(count==10)
			won(count,life);

		if(life==0)
		    warning(count);
		else
	        start(count,life);
	}
     }
	
}
	   
int start(int d,int b)
{
	int y,i;
		for(i=0;i<b;i++)
	printf("💚 ");
      printf(tw"\t\t\t\t\t                                                                                      %d\n"rs,d);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"    █▀█▀█▒█▀█▒▒█▀█▒▄███▄ \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"   ░█▀█▀█░█▀██░█▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"   ░█▀█▀█░█▀████▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"   ████████▀█████████████\n"rs);
        printf("\t\t\t\t\t                                                                   \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                █▀█                  \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                ░▄▀                  \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                █▄▄                \n"rs);
      	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(tp"\t\t\t\t\t        ▄█▀▄                     "rs tc"    ▄       ▄█▄       ▄    \n");
      printf(tp"\t\t\t\t\t      ▄██▀▀▀▀▄                   "rs tc"   ▐█▌  ▄  █████  ▄  ▐█▌   \n");
      printf(tp"\t\t\t\t\t    ▄███▀▀▀▀▀▀▀▄                 "rs tc"    █  ███▄▄███▄▄███  █    \n");
      printf(tp"\t\t\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄               "rs tc"   ░█░░█▄█▄█▀▒▀█▄█▄█░░█░   \n");
      printf(tp"\t\t\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄             "rs tc"   ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██   \n");
        printf("\t\t\t\t\t                                                                   \n");
      printf(tr"\t\t\t\t\t        ▀▀█                                  █ █░                \n");
      printf(tr"\t\t\t\t\t        ░▀▄                                  █▄█▄                \n");
      printf(tr"\t\t\t\t\t        ▄▄█░                                   █░                \n"rs);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
        sleep(3);
      system("clear");
}      
int one(int d,int b)
{
	int y,i;
		for(i=0;i<b;i++)
	printf("💚 ");
      printf(tw"\t\t\t\t\t                                                                                      %d\n"rs,d);
      printf(tc"\t\t\t\t\t       ▄▀▄     ▄▀▄                                               \n"rs);
      printf(tg"\t\t\t\t\t      ▄█░░▀▀▀▀▀░░█▄                                              \n"rs); 
      printf(tr"\t\t\t\t\t  ▄▄  █░░░░░░░░░░░█  ▄▄                                          \n"rs);
      printf(tr"\t\t\t\t\t █▄▄█ █░░▀░░┬░░▀░░█ █▄▄█                                         \n"rs);
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"    █▀█▀█▒█▀█▒▒█▀█▒▄███▄ \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"   ░█▀█▀█░█▀██░█▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"   ░█▀█▀█░█▀████▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"   ████████▀█████████████\n"rs);
        printf("\t\t\t\t\t                                                                   \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                █▀█                  \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                ░▄▀                  \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                █▄▄                \n"rs);
	printf("\t\t\t\t\t                                                                   \n");
      	printf("\t\t\t\t\t                                                                   \n");
      	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(tp"\t\t\t\t\t        ▄█▀▄                     "rs tc"    ▄       ▄█▄       ▄    \n");
      printf(tp"\t\t\t\t\t      ▄██▀▀▀▀▄                   "rs tc"   ▐█▌  ▄  █████  ▄  ▐█▌   \n");
      printf(tp"\t\t\t\t\t    ▄███▀▀▀▀▀▀▀▄                 "rs tc"    █  ███▄▄███▄▄███  █    \n");
      printf(tp"\t\t\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄               "rs tc"   ░█░░█▄█▄█▀▒▀█▄█▄█░░█░   \n");
      printf(tp"\t\t\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄             "rs tc"   ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██   \n");
        printf("\t\t\t\t\t                                                                   \n");
      printf(tr"\t\t\t\t\t        ▀▀█                                  █ █░                \n");
      printf(tr"\t\t\t\t\t        ░▀▄                                  █▄█▄                \n");
      printf(tr"\t\t\t\t\t        ▄▄█░                                   █░                \n"rs);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
      y=user_input();
      return y;

}     
int two(int d,int b)
{
	int y,i;
	for(i=0;i<b;i++)
	printf("💚 ");
      printf(tw"\t\t\t\t\t                                                                                      %d\n",d);
      printf(tr"\t\t\t\t\t                                 "rs tg"         ▄▀▄     ▄▀▄       \n"rs);
      printf(tr"\t\t\t\t\t                                 "rs tr"        ▄█░░▀▀▀▀▀░░█▄      \n"rs); 
      printf(tr"\t\t\t\t\t                                 "rs tp"    ▄▄  █░░░░░░░░░░░█  ▄▄  \n"rs);
      printf(tr"\t\t\t\t\t                                 "rs tg"   █▄▄█ █░░▀░░┬░░▀░░█ █▄▄█ \n"rs);
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"    █▀█▀█▒█▀█▒▒█▀█▒▄███▄ \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"   ░█▀█▀█░█▀██░█▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"   ░█▀█▀█░█▀████▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"   ████████▀█████████████\n"rs);
        printf("\t\t\t\t\t                                                                   \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                █▀█                  \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                ░▄▀                  \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                █▄▄                \n"rs);
      	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(tp"\t\t\t\t\t        ▄█▀▄                     "rs tc"    ▄       ▄█▄       ▄    \n");
      printf(tp"\t\t\t\t\t      ▄██▀▀▀▀▄                   "rs tc"   ▐█▌  ▄  █████  ▄  ▐█▌   \n");
      printf(tp"\t\t\t\t\t    ▄███▀▀▀▀▀▀▀▄                 "rs tc"    █  ███▄▄███▄▄███  █    \n");
      printf(tp"\t\t\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄               "rs tc"   ░█░░█▄█▄█▀▒▀█▄█▄█░░█░   \n");
      printf(tp"\t\t\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄             "rs tc"   ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██   \n");
        printf("\t\t\t\t\t                                                                   \n");
      printf(tr"\t\t\t\t\t        ▀▀█                                  █ █░                \n");
      printf(tr"\t\t\t\t\t        ░▀▄                                  █▄█▄                \n");
      printf(tr"\t\t\t\t\t        ▄▄█░                                   █░                \n"rs);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
      y=user_input();
      return y;
}
int three(int d,int b)
{	
	int y,i;
	for(i=0;i<b;i++)
	printf("💚 ");
      printf(tw"\t\t\t\t\t                                                                                      %d\n"rs,d);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"    █▀█▀█▒█▀█▒▒█▀█▒▄███▄ \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"   ░█▀█▀█░█▀██░█▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"   ░█▀█▀█░█▀████▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"   ████████▀█████████████\n"rs);
        printf("\t\t\t\t\t                                                                   \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                █▀█                  \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                ░▄▀                  \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                █▄▄                \n"rs);
      	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(tb"\t\t\t\t\t      ▄▀▄     ▄▀▄                                                  \n");
      printf(tb"\t\t\t\t\t     ▄█░░▀▀▀▀▀░░█▄                                                 \n");
      printf(tg"\t\t\t\t\t ▄▄  █░░░░░░░░░░░█  ▄▄                                             \n");
      printf(ty"\t\t\t\t\t█▄▄█ █░░▀░░┬░░▀░░█ █▄▄█                                            \n"rs);
      printf(tp"\t\t\t\t\t        ▄█▀▄                     "rs tc"    ▄       ▄█▄       ▄    \n");
      printf(tp"\t\t\t\t\t      ▄██▀▀▀▀▄                   "rs tc"   ▐█▌  ▄  █████  ▄  ▐█▌   \n");
      printf(tp"\t\t\t\t\t    ▄███▀▀▀▀▀▀▀▄                 "rs tc"    █  ███▄▄███▄▄███  █    \n");
      printf(tp"\t\t\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄               "rs tc"   ░█░░█▄█▄█▀▒▀█▄█▄█░░█░   \n");
      printf(tp"\t\t\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄             "rs tc"   ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██   \n");
        printf("\t\t\t\t\t                                                                   \n");
      printf(tr"\t\t\t\t\t        ▀▀█                                  █ █░                \n");
      printf(tr"\t\t\t\t\t        ░▀▄                                  █▄█▄                \n");
      printf(tr"\t\t\t\t\t        ▄▄█░                                   █░                \n"rs);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
	 y=user_input();
	 return y;
}     
int four(int d,int b)
{
	int y,i;
	for(i=0;i<b;i++)
	 printf("💚 ");                                                                                      
      printf(tw"\t\t\t\t\t                                                                                      %d\n"rs,d);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(ty"\t\t\t\t\t         █▄██▄█                  "rs tb"    █▀█▀█▒█▀█▒▒█▀█▒▄███▄ \n"rs);
      printf(ty"\t\t\t\t\t█▄█▄█▄█▄█▐█┼██▌█▄█▄█▄█▄█         "rs tb"   ░█▀█▀█░█▀██░█▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t███┼█████▐████▌█████┼███         "rs tb"   ░█▀█▀█░█▀████▀█░█▄█▄█ \n"rs);
      printf(ty"\t\t\t\t\t█████████▐████▌█████████         "rs tb"   ████████▀█████████████\n"rs);
        printf("\t\t\t\t\t                                                                   \n"); 
      printf(tr"\t\t\t\t\t           ▄█░                                █▀█                  \n"); 
      printf(tr"\t\t\t\t\t           ░█░                                ░▄▀                  \n");
      printf(tr"\t\t\t\t\t           ▄█▄                                █▄▄                \n"rs);
      	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
      printf(tb"\t\t\t\t\t                                 "rs ty"        ▄▀▄     ▄▀▄         \n");
      printf(tb"\t\t\t\t\t                                 "rs tr"       ▄█░░▀▀▀▀▀░░█▄        \n");
      printf(tb"\t\t\t\t\t                                 "rs tb"   ▄▄  █░░░░░░░░░░░█  ▄▄    \n");
      printf(tb"\t\t\t\t\t                                 "rs ty"  █▄▄█ █░░▀░░┬░░▀░░█ █▄▄█   \n"rs);
      printf(tp"\t\t\t\t\t        ▄█▀▄                     "rs tc"    ▄       ▄█▄       ▄    \n");
      printf(tp"\t\t\t\t\t      ▄██▀▀▀▀▄                   "rs tc"   ▐█▌  ▄  █████  ▄  ▐█▌   \n");
      printf(tp"\t\t\t\t\t    ▄███▀▀▀▀▀▀▀▄                 "rs tc"    █  ███▄▄███▄▄███  █    \n");
      printf(tp"\t\t\t\t\t  ▄████▀▀▀▀▀▀▀▀▀▀▄               "rs tc"   ░█░░█▄█▄█▀▒▀█▄█▄█░░█░   \n");
      printf(tp"\t\t\t\t\t▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄             "rs tc"   ██▄▄█▄█▄█▒▒▒█▄█▄█▄▄██   \n");
        printf("\t\t\t\t\t                                                                   \n");
      printf(tr"\t\t\t\t\t        ▀▀█                                  █ █░                \n");
      printf(tr"\t\t\t\t\t        ░▀▄                                  █▄█▄                \n");
      printf(tr"\t\t\t\t\t        ▄▄█░                                   █░                \n"rs);
	printf("\t\t\t\t\t                                                                   \n");
	printf("\t\t\t\t\t                                                                   \n");
printf(tb"\t░░░░░        ░░░░░▄▓▄     "rs tg"   ▒▐▒▐▒▒▒▒▌▒  ▒▌▒▒▐▒▒▌    ▒▐▒▐▒▒▒▒▌▒ ▒▒▌▒▒▐▒▒▌▒        \n"rs);
printf(tb"\t  ░░░░▄█▄░░░░░░░░▄▓▓▓▄    "rs tg"    ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒     ▒▀▄█▒▄▀▒   ▒▀▄▒▌▄▀▒ "rs ty"  ███▅▄▄▄▄▄▄▄▄▄          ███▅▄▄▄▄▄▄▄▄▄     \n");    
printf(tb"\t  ░░▄█████▄░░░░░▄▓▓▓▓▓▄   "rs tg"       ██         ██░░         ██         ██    "rs ty" ██▐████████████        ██▐████████████    \n");        
printf(tb"\t  ░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄  "rs tg"       ██         ██░░  ░      ██         ██    "rs ty" ▐█▀████████████▌▌      ▐█▀████████████▌▌  \n");
printf(tb"\t  ▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄  "rs tg"       ██         ██░          ██         ██    "rs ty" ▐ ▀▀▀▐█▌▀▀███▀█ ▌      ▐ ▀▀▀▐█▌▀▀███▀█ ▌  \n");
printf(tb"\t  ██████████████████████░░"rs tg"▒ ░░░ ▄██▄░░░░░░░▄██▄░░   ░░░ ▄██▄░░░░░░░▄██▄░░ "rs ty" ▐▄   ▄█   ▄█▌▄█        ▐▄   ▄█   ▄█▌▄█    \n");
        y=user_input();
       return y;
}

int warning(int count)
{
	int i=0;
	for(i=0;i<15;i++)
	{
        if((i%2)==0)
	{
	system("clear");
	newlines(15);
	printf(tc"\t\tyour score="tw"%d\n"rs tc"\t\t\t\t\t\t\t\t\t\t\t\t\t\thigh score="tw"75"rs,count);
        printf("\n");
	printf(tr"\t\t\t\t░██████╗░░█████╗░███╗░░░███╗███████╗  ░█████╗░██╗░░░██╗███████╗██████╗░\n");
        printf(tb"\t\t\t\t██╔════╝░██╔══██╗████╗░████║██╔════╝  ██╔══██╗██║░░░██║██╔════╝██╔══██╗\n");
        printf(tp"\t\t\t\t██║░░██╗░███████║██╔████╔██║█████╗░░  ██║░░██║╚██╗░██╔╝█████╗░░██████╔╝\n");
        printf(tc"\t\t\t\t██║░░╚██╗██╔══██║██║╚██╔╝██║██╔══╝░░  ██║░░██║░╚████╔╝░██╔══╝░░██╔══██╗\n");
        printf(tg"\t\t\t\t╚██████╔╝██║░░██║██║░╚═╝░██║███████╗  ╚█████╔╝░░╚██╔╝░░███████╗██║░░██║\n");
        printf(ty"\t\t\t\t░╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝  ░╚════╝░░░░╚═╝░░░╚══════╝╚═╝░░╚═╝\n");
	sleep(1);
	newlines(10);
	}
	else
	{	
	system("clear");
		newlines(15);
	printf(tc"\t\tyour score="tw"%d\n"rs tc"\t\t\t\t\t\t\t\t\t\t\t\t\t\thigh score="tw"75"rs,count);
        printf("\n");
	printf(tp"\t\t\t\t░██████╗░░█████╗░███╗░░░███╗███████╗  ░█████╗░██╗░░░██╗███████╗██████╗░\n");
        printf(tg"\t\t\t\t██╔════╝░██╔══██╗████╗░████║██╔════╝  ██╔══██╗██║░░░██║██╔════╝██╔══██╗\n");
        printf(tr"\t\t\t\t██║░░██╗░███████║██╔████╔██║█████╗░░  ██║░░██║╚██╗░██╔╝█████╗░░██████╔╝\n");
        printf(tg"\t\t\t\t██║░░╚██╗██╔══██║██║╚██╔╝██║██╔══╝░░  ██║░░██║░╚████╔╝░██╔══╝░░██╔══██╗\n");
        printf(ty"\t\t\t\t╚██████╔╝██║░░██║██║░╚═╝░██║███████╗  ╚█████╔╝░░╚██╔╝░░███████╗██║░░██║\n");
        printf(tc"\t\t\t\t░╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝  ░╚════╝░░░░╚═╝░░░╚══════╝╚═╝░░╚═╝\n");
	sleep(1);
	newlines(10);
	}
	}
	exit(0);
}

int user_input()
{
     register int count=0;
    fd_set rfds;
    struct timeval tv;
    register int retval;
     int input = 0;
    tv.tv_sec = 3;
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
