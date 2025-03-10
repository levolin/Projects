#include<stdio.h> 
#include<conio.h> 
#include<time.h> 
#include<stdlib.h> 
#include<graphics.h> 
#include<dos.h> 
void printline(void)
{
printf("********************************************************************************");
}
void deposit(long int *bal)
{
long int dep;
printf("\nYOUR THE BALANCE IS %ld\n",*bal); printline();
printf("\nENTER DEPOSIT MONEY\n"); scanf("%ld",&dep);
printline();
*bal+=dep;
printf("\nNOW THE CURRECT BALANCE IS %ld\n",*bal); printline();
}
int main()
{
int centerX,centerY; char a[5];
int pin,b=1234,try=1,ty,i,j,k,opt,myopt,m,z,x=0; long int ca,quickca=500,bal=20000;
void deposit(long int*);
int pa = DETECT, va, nk;

initgraph(&pa, &va,"//turboc3//bgi"); centerX = getmaxx() / 2;
centerY = getmaxy() / 2; settextstyle(DEFAULT_FONT, HORIZ_DIR, 3); for (nk = 0; nk <= 200; nk++) {
setcolor(nk / 10);
circle(centerX, centerY, 20 + nk); delay(0);
 
}
setcolor(WHITE);
outtextxy(centerX - textwidth("WELCOME TO MMNS BANK") / 2, centerY, "WELCOME TO MMNS BANK"); getch();
closegraph(); clrscr();
printf("\n\n\n\n\n\t\t\t	ENTER THE PIN NUMBER\n\n\t\t\t\t	"); for(i=0;i<5;i++)
{
a[i]=getch();
if(a[i]=='\b')
{
clrscr();
printf("\n\n\t\t\t\tTRANSACTION CALCELLED"); getch();
return 0;
}
if(i<4) printf("*");
}
pin=atoi(a); if(pin!=b)
{
clrscr();
printf("\n\n\n\n\t\t\t\t WRONG PIN ENTERED\n\n\t\t\t\t	"); getch();
for(try=1;try<3;try++)
{
for(i=0;i<5;i++)
{
a[i]=getch();
if(a[i]=='\b')
{
clrscr();
printf("\n\n\t\t\t\tTRANSACTION CANCELLED"); getch();
return 0;
}
if(i<4) printf("*");
}
pin=atoi(a); if(try<2){ if(pin!=b)
 
{
clrscr();
printf("\n\n\n\t\t\t YOU HAVE %d REMAINING CHANCE\n\n\t\t\t\t ",2-try); getch();
}
}
}
if(try==3&&pin!=b)
{
clrscr();
printf("\n\n\n\n\t\t\t THREE UNSUCCESSFUL ATTEMPTS\n\n\t\t\t "); printf(" YOUR CARD WILL BE FREEZED");
getch(); return 0;
}
}
do{ if(pin==b)
{
clrscr(); printline();
printf("\n\n\t\t\t ENTER 1 FOR CASH WITHDRAWL\n\n\t\t\t"); printf(" ENTER 2 FOR CASH DEPOSIT\t\t\t\n\n\t\t\t");
printf(" ENTER 3 TO CHECK BALANCE\n\n\t\t\t"); printf(" ENTER 4 FOR QUICK CASH\n\n\t\t\t"); printf(" ENTER 5 TO CHANGE PIN\n\n\t\t\t");
printf(" ENTER 6 TO CANCEL TRANSACTION\n\n\t\t\t\n"); printline();
printf("\t\t\t\t ");

}
for(ty=0;ty<4;ty++)
{
scanf("%d",&opt); if(opt<=6&&opt>0) break;
else{ if(ty<3)
printf("\n\n\t\t\t YOU STILL HAVE %d ATTEMPTS LEFT\n\t\t\t \t	",3-ty);
}
}
if(opt>6||opt<=0)
{
printf("\t\t	YOU HAVE DONE THREE INCORRECT ATTEMPTS\n\n\t\t\tYOUR TRANSACTION IS CANCELLED");
getch(); return 0;
}
else
{
if(opt==1)
{
ty=0;
A: clrscr(); ty++; if(ty>3)
{
clrscr();
printf("\n\n\n\t\t\t YOU HAVE DONE THREE INVALID ATTEMPTS\n\t\t \t\t PLEASE TRY AGAIN LATER"); getch();
break;
}
else
{
printline();
printf("\t\t\tENTER THE CASH YOU WANT TO WITHDRAW\n\t\t\t\t "); scanf("%ld",&ca);
if(ca<=bal)
{
if(ca==0||(ca%100)!=0)
{
printline();
printf("\n\n\t\t\tNOT A VALID AMOUNT\n\t\t\tPLEASE ENTER THE AMOUNT IN TERMS OF 100\n"); printline();
getch(); goto A;
}
else if(ca<0)
{
printline();
printf("\n\n\t\t\tINVALID AMOUNT ENTERED\n\t\t\tPLEASE TRY AGAIN\n"); printline();
getch(); goto A;
}
else
{
bal-=ca;
 
printf("\n\n\t\t\t%ld HAS BEEN WITHDRAWN SUCCESSFULLY\n",ca); printline();
}
}
else
{
printf("\n\t\t\t \tINSUFFICIENT FUNDS\n\t\t\t \tPLEASE TRY AGAIN LATER\n"); printline();
getch();
}
}
}
else if(opt==2)
{
clrscr(); deposit(&bal); getch();
}
else if(opt==3)
{
clrscr(); printline();
printf("\n\t\t\t YOUR BALANCE IS %f\n",bal); printline();
printf("\n\t\t\tTHANK YOUR FOR VISITING MMNS BANK\n"); getch();
}
else if(opt==4)
{
clrscr();
printf("\n\t\t\t YOUR QUICK CASH AMOUNT IS %ld\n",quickca); printline();
printf("\n\t\t	ENTER 1-TO QUICK CASH 2-EDIT QUICK CASH 3-EXIT\n");
printline(); for(i=0;i<=40;i++) printf(" ");
scanf("%d",&m); switch(m)
{
case 1:printf("\nYOUR QUICK CASH %ld IS WITHDRAWN\n",quickca); printf("\nTHANK YOUR FOR VISITING MMNS BANK\n");
getch(); break;
case 2:printf("\nENTER YOUR AMOUNT FOR QUICK CASH\n");
 
fflush(stdin); m=0;
scanf("%ld",&quickca);
printf("\nNOW YOUR QUICK CASH AMOUNT IS %ld\n",quickca); printline();
printf("\nENTER 1-TO QUICK CASH 2-EXIT\n");
printline(); scanf("%d",&m); if(m==1)
{
printf("\nYOUR QUICK CASH %ld IS WITHDRAWN\n",quickca); printf("THANK YOUR FOR VISITING MMNS BANK\n");
printline();
}
getch();
case 3:printf("thanks for visiting"); x=1;
break;

}
}
else if(opt==5)
{
void changepin(char *); clrscr();
changepin(a); getch();
}
else if(opt==6)
{

break;

}
}
if(x!=1){
printf("\n\n\t\t\t\tENTER 1 TO CONTINUE\n\t\t\t ENTER 2 TO END THE PROGRAM\n\t\t\t\t"); scanf("%d",&z);
}
}while(z==1&&x!=1); clrscr(); for(i=0;i<=10;i++) printf("\n"); for(i=0;i<=22;i++)
 
printf(" ");
printf("THANK YOU FOR VISITING MMNS BANK");
getch(); return 0;
}
void changepin(char *a)
{
char o[5]; int i,flag=0;
printf("YOU HAVE SELECTED THE CHANGE PIN OPTION\n");
getch();
printf("ENTER YOUR ORIGINAL PIN ");
for(i=0;i<5;i++)
{
o[i]=getch(); if(i<4)
printf("*");
if(o[i]!=*(a+i)) flag=1;
}
if(flag==1)
printf("WRONG PIN ENTERED\nPLEASE TRY AGAIN LATER");
 
else
{
 


printf("ENTER THE NEW PIN\n");
for(i=0;i<5;i++)
{
 
*(a+i)=getch(); if(i<4) printf("*");
}
printf("\n\nYOUR PIN HAS BEEN CHANGED");
}

}