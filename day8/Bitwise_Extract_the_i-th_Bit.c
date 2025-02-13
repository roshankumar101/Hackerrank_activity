#include <stdio.h>

int main() {

    int n,i;
    scanf("%d %d",&n ,&i);
    
    n = (n>>i) & 1;
    switch(n){
        case 0: printf("0");
            break;
        default: printf("1");
    }
    return 0;
}