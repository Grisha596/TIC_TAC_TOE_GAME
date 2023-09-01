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