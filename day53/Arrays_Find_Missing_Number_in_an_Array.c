#include <stdio.h>

int main() {

    int size;
    scanf("%d",&size);
    int arr[size-1];
    for(int i=0; i<size-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<=size; i++){
        int j;
        for(j=0; j<size-1; j++){
            if(arr[j] == i) break;
        }
        if(j == size-1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}