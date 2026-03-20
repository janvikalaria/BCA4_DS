//WAP to insert an element at the beginning of an array.

#include<stdio.h>
void main(){

    int n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter element to insert at the beginning : ");
    scanf("%d",&x);

    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }

    arr[0]=x;
    n++;
 
    printf("Array after insertion: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}