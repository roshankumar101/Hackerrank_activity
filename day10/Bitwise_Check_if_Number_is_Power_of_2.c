#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    switch(n){
        case 0: printf("No");
            break;
        default: n = n & (n-1);
            switch(n){
                case 0: printf("Yes");
                    break;
                default: printf("No");
            }
            break;
    }
    return 0;
}