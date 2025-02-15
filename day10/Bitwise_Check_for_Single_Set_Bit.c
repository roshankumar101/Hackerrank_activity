#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    switch(n){
        case 0: printf("-1");
            break;
        default: n = n & (n-1);
            switch(n){
                case 0: printf("1");
                    break;
                default: printf("-1");
            }
    }
    return 0;
}