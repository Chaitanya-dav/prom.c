#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>

void help()
 {
 system("cls");
 printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
 printf("\n\n\tknowledge questions and the right answer is to be chosen among");
 printf("\n\n\tthe four options provided.");
 printf("\n\n\tRemember that the more quicker you give answer the more");
 printf("\n\n\tSo BEST OF LUCK.");
 }

int main()
     {
     int r,i;
     int pa;int nq[6];int w;
     char choice;
     char playername[20];
     system("cls");
     //randomize();
     mainhome:
     system("cls");
     puts("\n\t\t WELCOME TO TRIVIA TEST PROGRAM\n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to start game       ");
     puts("\n\t\t Enter 'H' for help            ");
     puts("\n\t\t Enter 'Q' to quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());

      if (choice=='Q')
 exit(1);
     else if (choice=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(choice=='S'){
     system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     i=1;
     start:
     r=rand()%15+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nWhat is/are the roots of the curve x^2+2x+1=0?");
  printf("\n\nA.1\tB.0\n\nC.none\tD.both A & B\n\n");
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.1");break;}

  case 2:
  printf("\n\n\nWhich animated film features a character named Simba?");
  printf("\n\nA.Jungle Book\tB.The Lion King\n\nC.Arabian Nights\tD.None\n\n");
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!"); break;}
  else
         printf("\n\nWrong!!! The correct answer is B.The Lion King");
  break;

  case 3:
  printf("\n\n\nWho was the first US President?");
  printf("\n\nA.Richard Nikson\tB.Abraham Linkon\n\nC.John F. Kennedy\tD.George Washington\n\n");
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.George Washington");break;}


  case 4:
  printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
  printf("\n\nA.Glen Magrath\tB.Mahela Jawardan\n\nC.Mathew Hayden\tD.Sachin Tendulkar\n\n");
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Glen Magrath");break;}


  case 5:
  printf("\n\n\nWhich country won the Fifa World Cup 1998?");
  printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n\n");
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.France");break;}

  case 6:
  printf("\n\n\nHow many members are in One Directions?");
  printf("\n\nA.1\tB.4\n\nC.3\tD.2\n\n");
  if (toupper(getch())=='B' )
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.4");break;}


  case 7:
  printf("\n\n\nWhat is fibonacci series?");
  printf("\n\nA.1 2 3 4 ...\tB.0 1 1 2 3 5...\n\nC.2 4 6 8 10...\tD.1 4 5 7 8 ....\n\n");
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.0 1 1 2 3 5...");break;}


  case 8:
  printf("\n\n\nWhere does Bopinder Jogi belong to?");
  printf("\n\nA.India\tB.Australia\n\nC.America\tD.London\n\n");
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.India");break;}


  case 9:
  printf("\n\n\nWhat is the capital of India");
  printf("\n\nA.Haryana\tB.Hyderabad\n\nC.New Delhi\t\tD.Tamil Nadu\n\n");
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.New Delhi");break;}


  case 10:
  printf("\n\n\nWhich syllabe is stressed in the word 'instanteneous'?");
  printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.3rd");break;}


  case 11:
  printf("\n\n\nWho is IShowSpeed?");
  printf("\n\nA.Streamer\tB.Youtuber\n\nC.Influencer\tD.All of the Above\n\n");
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.All of the Above");break;}

  case 12:
  printf("\n\n\nWho was the player that broke sachin's record of most centuries");
  printf("\n\nA.Malinga Bandara\tB.Virat Kholi\n\nC.Bret Lee\tD.Murali Daran\n\n");
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is B. Virat Kholi");break;}

  case 13:
  printf("\n\n\nWhich contry was World cup 2023 held ?");
  printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.India\n\n");
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.India");break;}

  case 14:
  printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
  printf("\n\nA.Narayan Wagle\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\tD.Khagendra Sangraula\n");
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");break;}

  case 15:
  printf("\n\n\nWhich country is Maria Sarapova from?");
  printf("\n\nA.Russia\tB.Switzerland\n\nC.Argentina\tD.Spain\n\n");
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Russia");break;}
  }
 i++;
 if (i<=5) goto start;
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 
 goto mainhome;
 }
 return 0;
}
