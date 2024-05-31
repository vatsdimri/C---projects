#include<stdio.h>
#include<conio.h> 

int main(int argc, char* argv[]){
    int i=0;
    printf("hello world!");
    printf("%d", argc);
    for(i = 0; i <=argc-1; i++){
        printf("%c \n",argv[i]);
    }
    printf("%c", *argv[0]);
    printf("%c", *argv[1]);
    getch();
    return 0;
}