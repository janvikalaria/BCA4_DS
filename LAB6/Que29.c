//WAP to delete an element at the beginning of an array

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

    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }

    n--;

    printf("array after deletion:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}