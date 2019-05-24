// 연결리스트를 사용하여 불필요하게 낭비되는 메모리를 제어할 수 있다. 
#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int data;
    struct Node *next;
} Node;

Node *head;

void addFirst(Node *root, int data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data=data;
    node->next = root->next;
    root->next = node;
}

void removeFirst(Node *root){
    Node* front = root->next;
    root->next = front->next;
    free(front);
}

void clearAll(Node *root){
    Node *cur = root->next;
    while(cur != NULL){
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
}

void showAll(Node *root){
    Node *cur = root->next;
    while(cur != NULL){
        printf("%d ", cur->data);
        cur = cur->next;
    }
}

int main(){
    head = (Node*)malloc(sizeof(Node));
    head->next=NULL;
    // Node *node1 = (Node*)malloc(sizeof(Node));
    // node1->data=1;
    // Node *node2 = (Node*)malloc(sizeof(Node));
    // node2->data=2;

    // head->next=node1;
    // node1->next=node2;
    // node2->next=NULL;

    addFirst(head, 1);
    addFirst(head, 2);
    addFirst(head, 4);

    addFirst(head, 10);
    removeFirst(head);
    showAll(head);
    clearAll(head);
    // showAll(head);
    // Node *cur = head->next;
    // while(cur != NULL){
    //     printf("%d ", cur->data);
    //     cur = cur->next;
    // }
    return 0;
}
