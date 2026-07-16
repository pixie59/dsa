#include <stdio.h>
#include <stdlib.h>
int main(){
    struct Node{
        int data;
        struct Node * next;
    };
    struct Node * newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=10;
    newnode->next=NULL;
    printf("%d",newnode->data);}