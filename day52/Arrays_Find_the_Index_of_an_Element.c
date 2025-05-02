#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int i;
    for(i=0; i<size; i++){
        if(arr[i] == target) break;
    }
    if(i < size) printf("%d",i);
    else printf("-1");
    return 0;
}