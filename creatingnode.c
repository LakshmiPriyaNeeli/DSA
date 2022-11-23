/*    creating node in a linked list      */
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
int main(){
    struct node*head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    printf("the data part in the node is %d",head->data);
    return 0;



}