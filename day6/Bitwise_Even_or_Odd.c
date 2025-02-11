#include <stdio.h>

int main() {

    int num;
    scanf("%d",&num);
    
    num = num & 1;
    if(num == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}