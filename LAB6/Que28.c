//WAP to insert an element at the end of an array

#include<stdio.h>
void main(){
    int n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter the element to insert at the end: ");
    scanf("%d",&x);

    arr[n]=x;
    n++;

    printf("Array after insertion: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}