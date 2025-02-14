#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    n = n & 15;
    switch(n){
        case 0: printf("0");
            break;
            
            
        case 8:
        case 4:
        case 2:
        case 1: printf("1");
            break;
            
        case 14:
        case 13:
        case 11:
        case 7: printf("3");
            break;
            
        case 15: printf("4");
            break;
            
        default: printf("2");
            break;
    }
    return 0;
}