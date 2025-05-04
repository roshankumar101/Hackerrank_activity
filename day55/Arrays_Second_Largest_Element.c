#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int i=1;
    for( ; i<n; i++){
        if(arr[n-1] > arr[n-i-1]) break;
    }
    if(i < n) return arr[n-i-1];
    else return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}