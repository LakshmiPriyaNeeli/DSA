/*    printing the data in the nodes of a linked list      */
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};void print_data(struct node*ptr){
    while(ptr!=NULL){
        printf("the element is %d \n",ptr->data);
        ptr=ptr->next;
    

    }
}
int main(){
    struct node*head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=30;
    head->next=NULL;
    struct node*current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=50;
    current->next=NULL;
    head->next=current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=100;
    current->next=NULL;
    head->next->next=current;
    print_data(head);
    return 0;
}