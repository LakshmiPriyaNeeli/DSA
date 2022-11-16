/* INSERTION-INSERTING AN ELEMENT IN BETWEEN ARRAY  */
#include<stdio.h>
int main(){
    int a[50],size,i,num,pos;
    printf("enter size of an array:");
    scanf("%d",&size);
     printf("enter elements of an array:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }printf("elements of an array are:\n ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }printf("enter a number to be inserted\n ");
    scanf("%d",&num);
    printf("enter the position where the number has to be inserted\n ");
    scanf("%d",&pos);
    for(int i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }a[pos-1]=num;
    size++;
    printf("the elements of an array after insertion is:");
    for(i=0;i<=size;i++){
        printf("%d ",a[i]);
    }


    

}