#include <stdio.h>

int main() {

    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == target) count++;
    }
    printf("%d",count);
    return 0;
}