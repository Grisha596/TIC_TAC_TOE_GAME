#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

char square [10]={'o','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard ();
int menu();
int start_game();
void instructions();

int main(){
system("cls");
menu();
getch();
}

int menu()
{
int option;
char ch='y';
system("cls");
printf("\n");
printf("\n\t\t*****WELCOME TO TIC TAC TOE GAME*****\n\n ");
printf("\t\t\t\tMENU\n");
printf("\t\t\t\t****\n");
while(ch=='y'){
printf("\n\t1.Start the game:)");
printf("\n\t2.How to play?");
printf("\n\t3.Exit the game:(\n");
printf("\nWhat do you want to do?:>");
scanf("%d",&option);
switch (option)
{
case 1:
start_game();
break;
case 2:
instructions();
break;
case 3:
exit(1);
default:
menu();
}
printf("\nDo you want to go back to menu(y/n)?");
scanf(" %c", &ch);
}
return 0;
}
void instructions(){
printf("\n\n");
printf("\t\t\tHOW TO PLAY?\n\n");
printf("1.First player will be given mark 'X' and second will be '0'.\n");
printf("2.Players take turns putting their marks in empty squares.\n");
printf("3.The first player to get 3 of his/her marks in a row (up, down, across, or diagonally) is the winner.\n");
printf("4.When all 9 squares are full, the game is over.\n");
printf("5.If no player has 3 marks in a row, the game ends with a draw.\n");
}

