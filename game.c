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