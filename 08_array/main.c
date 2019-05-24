#include<stdio.h>
#include<limits.h>

int main(void){
    int a[10] ={6,5,4,3,9,8,0,1,2,7};
    int i, max = INT_MIN;
    for (i =0; i<10;i++){
        if (max < a[i])max = a[i];
    }

    printf("%d",max);
    char b[20];
    scanf("%s",&b);
    printf("%s\n",b);

    return 0;
}