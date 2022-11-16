/* transversal- visiting every element of array exactly once.  */
#include<stdio.h>
int main(){
    int a[50],size,i;
    printf(" enter size of array :");
    scanf("%d",&size);
    printf("enter elements of array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);


    }printf("elements ofarray are: ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
        
    }
}