#include<stdio.h>
#include<stdlib.h>

int main(){
    // Dynamic memory allocation for an array of integers
    int *arr=(int*)malloc(5*sizeof(int));
    int sum = 0;
    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum of elements: %d\n", sum);
    // Free the allocated memory
    free(arr);
    return 0;

}