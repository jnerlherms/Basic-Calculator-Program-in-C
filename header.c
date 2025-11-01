#include<stdio.h>
#include<unistd.h>
#include<windows.h>
#include<stdlib.h>

void gotoxy(int x, int y){

  printf("\033[%d;%dH", y, x);

  return;
}

void BoxEquation(){
  gotoxy(35,11);
  printf("_________________________________________________________ \n");
  gotoxy(35,12);
  printf("|                                                       | \n");
  gotoxy(35,13);
  printf("|                                                       | \n");
  gotoxy(35,14);
  printf("|                                                       | \n");
  gotoxy(35,15);
  printf("|_______________________________________________________| \n");

  return;
}

void ErrorBox(){
  gotoxy(35,11);
  printf("_________________________________________________________ \n");
  gotoxy(35,12);
  printf("|                                                       | \n");
  gotoxy(35,13);
  printf("|                                                       | \n");
  gotoxy(35,14);
  printf("|_______________________________________________________| \n");

  return;
}

void BoxMenu(){
    gotoxy(35,9);
    printf("_________________________________________________________ \n");
    gotoxy(35,10);
    printf("|                                                       | \n");
    gotoxy(35,11);
    printf("|                                                       | \n");
    gotoxy(35,12);
    printf("|                                                       | \n");
    gotoxy(35,13);
    printf("|                                                       | \n");
    gotoxy(35,14);
    printf("|                                                       | \n");
    gotoxy(35,15);
    printf("|                                                       | \n");
    gotoxy(35,16);
    printf("|                                                       | \n");
    gotoxy(35,17);
    printf("|                                                       | \n");
    gotoxy(35,18);
    printf("|                                                       | \n");
    gotoxy(35,19);
    printf("|                                                       | \n");
    gotoxy(35,20);
    printf("|_______________________________________________________| \n");
  return;
}

int Menu1(){
  int option;

  BoxMenu();
  gotoxy(55,11);
  printf("SIMPLE CALCULATOR\n");
  gotoxy(56, 13);
  printf("[1] - Addition \n");
  gotoxy(54,14);
  printf("[2] - Subtraction \n");
  gotoxy(53,15);
  printf("[3] - Multiplication \n");
  gotoxy(55,16);
  printf("[4] - Division \n");
  gotoxy(57,17);
  printf("[5] - Exit \n");
  gotoxy(55,19);
  printf("Enter Option: ");
  scanf("%d", &option);

  system("cls");
  return option;
}

void Addition(int option){
  int num1, num2, answer;

  BoxEquation();

    gotoxy(50,13);
    printf("      +              = _______________ ");
    gotoxy(42,13);
    scanf("%d",&num1);
    gotoxy(60,13);
    scanf("%d",&num2);

    answer= num1 + num2;

    system("cls");
    BoxEquation();
    gotoxy(42,13);
    printf(" %d    +   %d      =   %d \n\n", num1, num2, answer);
    gotoxy(42,14);

  system("pause");
  return;
}

void Subtraction(int option){
  int num1, num2, answer;

  BoxEquation();

    gotoxy(50,13);
    printf("      -              = _______________ ");
    gotoxy(42,13);
    scanf("%d",&num1);
    gotoxy(60,13);
    scanf("%d",&num2);

    answer=num1-num2;

    system("cls");
    BoxEquation();
    gotoxy(42,13);
    printf(" %d    -   %d      =   %d \n\n", num1, num2, answer);
    gotoxy(42,14);

  system("pause");
  return;
}

void Multiplication(int option){
  int num1, num2, answer;

  BoxEquation();

    gotoxy(50,13);
    printf("      X              = _______________ ");
    gotoxy(42,13);
    scanf("%d",&num1);
    gotoxy(60,13);
    scanf("%d",&num2);

    answer=num1*num2;

    system("cls");
    BoxEquation();
    gotoxy(42,13);
    printf(" %d    X   %d      =   %d \n\n", num1, num2, answer);
    gotoxy(42,14);

  system("pause");
  return;
}

void Division(int option){
  int num1, num2, answer;

  BoxEquation();

    gotoxy(50,13);
    printf("      	/             = _______________ ");
    gotoxy(42,13);
    scanf("%d",&num1);
    gotoxy(60,13);
    scanf("%d",&num2);

    answer=num1/num2;

    system("cls");
    BoxEquation();
    gotoxy(42,13);
    printf(" %d    	/   %d      =   %d \n\n", num1, num2, answer);
    gotoxy(42,14);

  system("pause");
  return;
}


void InvalidOpt(int option){

    system("cls");
    ErrorBox();
    gotoxy(50, 12);
    printf("Invalid Option!");
    gotoxy(45,13);

  system("pause");
  return;
}

void Exit(int option){

    system("cls");
    system("exit");

}
