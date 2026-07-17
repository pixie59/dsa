#include <stdio.h>
int main() {
    int key = 5;
    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = 11;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d", i);
        }
        else {
            printf("Element not found");
        }
    
    return 0;
}}