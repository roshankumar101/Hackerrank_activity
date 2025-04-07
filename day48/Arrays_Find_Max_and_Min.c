#include <stdio.h>

int main() {


    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0], max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] < min) min = arr[i];
        else if(arr[i] > max) max = arr[i];
    }
    printf("%d %d",max,min);
    return 0;
}