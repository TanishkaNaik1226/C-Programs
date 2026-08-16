#include<stdio.h>
// int binary_search(int arr[], int n, int key) {
//     int low=0,high=n-1;;
//     while(low <= high) {
//         int mid = (low + high) / 2;
//         if(arr[mid] == key) {
//             return mid; 
//         }
//         else if(arr[mid] < key) {
//             low = mid + 1; 
//         }
//         else {
//             high = mid - 1; 
//         }
//     }
//     return -1;
// }

// int main() {
//     int n, key;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements in sorted order:\n", n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search: ");
//     scanf("%d", &key);
//     int result = binary_search(arr, n, key);
//     if(result != -1) {  
//         printf("Element found at index: %d\n", result);
//     } else {  
//         printf("Element not found in the array.\n");
//     }
//     return 0;
// }

int main(){
    int n, key;
    printf("Enter the number of elements: ");   
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int low,mid,high;
    low=0;
    high=n-1;
    while(low <= high) {
        mid=(low + high) / 2;
        if(arr[mid] == key) {   
            printf("Element found at index: %d\n", mid);
            return 0;
        }
        else if(arr[mid] < key) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
        printf("Element not found in the array.\n");
        return 0;
}
}