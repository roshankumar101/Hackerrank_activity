#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int check = 1;
    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            check = 0;
            break;
        }
    }
    if(check) printf("Sorted");
    else printf("Not Sorted");
    return 0;
}
