/*    deletion-deleting an element from an array*/
#include<stdio.h>
int main(){
    int a[50],size,i,pos;
    printf("enter the size of an array:");
    scanf("%d",&size);
    printf("enter the values of an araay:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }printf("the elements of an array are:");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);

    }printf("\nenter the position at which u want to delete a number:");
    scanf("%d",&pos);
    for(i=pos-1;i<size-1;i++){
        a[i]=a[i+1];
    }size--;
    printf("\nthe elements of an array after the deletion of a number from an array is:");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);

    }
}