#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int k=0,end=1,count=0;
void gameName()
{
 printf("\n\n\n\t\t\t\tTIC  TAC  TOE\n");
}
void input()
{
 printf("\n\tPLAYER 1 SYMBOL |- X \n");
 printf("\n\tPLAYER 2 SYMBOL |- O \n");
}
void draw()
{
 gameName();
 input();
 printf("\n\n\t\t\t\t.---.---.---.\n");
 printf("\t\t\t\t| %c | %c | %c |\n",a[0],a[1],a[2]);
 printf("\t\t\t\t|---.---.---|\n");
 printf("\t\t\t\t| %c | %c | %c |\n",a[3],a[4],a[5]);
 printf("\t\t\t\t|---.---.---|\n");
 printf("\t\t\t\t| %c | %c | %c |\n",a[6],a[7],a[8]);
 printf("\t\t\t\tl===.===.===l\n");
}
void getinput()
{
 char ch;
 int i;
 printf("\nEnter the POSITION:- ");
 scanf("%c",&ch);
 count++;
 if(k==0)
 {
  for(i=0;i<9;i++)
  {
   if(a[i]==ch)
   {
     a[i]='X';
     k=1;
     break;
   }
  }
 }
 else
 {
  for(i=0;i<9;i++)
  {
   if(a[i]==ch)
   {
    a[i]='O';
    k=0;
    break;
   }
  }
 }
}
int gameover()
{
  if(a[0]=='X'&&a[1]=='X'&&a[2]=='X')
   return(1);
  else if(a[0]=='X'&&a[3]=='X'&&a[6]=='X')
   return(1);
  else if(a[0]=='X'&&a[4]=='X'&&a[8]=='X')
   return(1);
  else if(a[1]=='X'&&a[4]=='X'&&a[7]=='X')
   return(1);
  else if(a[2]=='X'&&a[5]=='X'&&a[8]=='X')
   return(1);
  else if(a[2]=='X'&&a[4]=='X'&&a[6]=='X')
   return(1);
  else if(a[3]=='X'&&a[4]=='X'&&a[5]=='X')
   return(1);
  else if(a[6]=='X'&&a[7]=='X'&&a[8]=='X')
   return(1);

  else if(a[0]=='O'&&a[1]=='O'&&a[2]=='O')
   return(2);
  else if(a[0]=='O'&&a[3]=='O'&&a[6]=='O')
   return(2);
  else if(a[0]=='O'&&a[4]=='O'&&a[8]=='O')
   return(2);
  else if(a[1]=='O'&&a[4]=='O'&&a[7]=='O')
   return(2);
  else if(a[2]=='O'&&a[5]=='O'&&a[8]=='O')
   return(1);
  else if(a[2]=='O'&&a[4]=='O'&&a[6]=='O')
   return(2);
  else if(a[3]=='O'&&a[4]=='O'&&a[5]=='O')
   return(2);
  else if(a[6]=='O'&&a[7]=='O'&&a[8]=='O')
   return(2);

  else
   return (3);
}
void final()
{
 int var;
 var=gameover();
 if(var==1)
 {
  printf("\nPlayer 1 Won");
  end=0;
 }
 else if(var==2)
 {
 printf("\nPlayer 2 Won");
 end=0;
 }
 else;
}
void main()
{
 char c;
 label:
 clrscr();
 draw();
 while(end)
 {
  getinput();
  clrscr();
  draw();
  final();
  if(count==18)
  {
   printf("\n\t\t\t\t\tGAME OVER");
   break;
  }
 }
 printf("\n\nDo You Want To Play To Continue: Enter Y for Yes and N for No:");
 fflush(stdin);
 scanf("%c",&c);
 if(c=='y'||c=='Y')
 {
  a[0]='1';
  a[1]='2';
  a[2]='3';
  a[3]='4';
  a[4]='5';
  a[5]='6';
  a[6]='7';
  a[7]='8';
  a[8]='9';
  k=0;
  end=1;
  count=0;
   goto label;
 }
 printf("\n\n\t\t\t\t-|THANK YOU|-");
 getch();
}