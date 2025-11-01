#include<stdio.h>
#include<unistd.h>
#include<windows.h>
#include<stdlib.h>
#include"header.c"

int main(){
  system("cls");

    int opt=Menu1();

    if (opt >= 1 && opt <= 4) {
        if (opt == 1) {
          Addition(opt);
        }
        else if (opt == 2) {
          Subtraction(opt);
        }
        else if (opt == 3) {
          Multiplication(opt);
        }
        else{
          Division(opt);
        }
       return main();
    }

    else{
      if(opt == 5){
        Exit(opt);
      }
      else{
      InvalidOpt(opt);
      return main();
      }
    }
}
