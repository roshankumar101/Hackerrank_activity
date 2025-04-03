#include <stdio.h>

int is_evil_number(int n) {

    short count = 0;
    int temp = n;
    while(n!=0){
        temp = n&1;
        if(temp == 1) count++;
        n >>= 1;
    }
    if(count%2 == 0 && count>1) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}