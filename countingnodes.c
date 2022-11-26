/*    counting no.of nodes in a linked list        */
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
void count_of_nodes(struct node*ptr){
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;

    }printf("count of nodes is %d",count);
}
int main(){
    struct node*head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node*current=NULL;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=50;
    current->link=NULL;
    head->link=current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=100;
    current->link=NULL;
    head->link->link=current;
    count_of_nodes(head);
    return 0;

    


}