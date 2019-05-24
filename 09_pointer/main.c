#include<stdio.h>

int main(void){
    // int a = 5;
    // int *b = &a;

    // printf("%d\n", a);
    // printf("%p\n", &a);
    // printf("%p\n", b);
    // printf("%d\n", *b);
    // printf("%p\n",&b);
    char s[] = "HELLO WORLD!";
    char *b = s;
    printf("%c",*b);  
    return 0;
}