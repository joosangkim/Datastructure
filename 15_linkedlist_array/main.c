// 연결리스트를 사용하여 불필요하게 낭비되는 메모리를 제어할 수 있다. 

#include<stdio.h>
#define INF 10000

int arr[INF];
int count=0;

void addBack(int data){
    arr[count]=data;
    count++;
}

void addFirst(int data){
    for (int i = count; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0]=data;
    count++;
}

void deleteAt(int idx){
    int tar = arr[idx];
    for(int i = idx; i<count-1; i++){
        arr[i] = arr[i+1];
    }
    printf("Delete num at %d is %d\n", idx, tar);
    count--;
}

void show(){
    for (int i =0; i<count;i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    addBack(7);
    addBack(4);
    addBack(5);
    addFirst(2);
    addFirst(1);
    deleteAt(2);
    show();

    return 0;
}
