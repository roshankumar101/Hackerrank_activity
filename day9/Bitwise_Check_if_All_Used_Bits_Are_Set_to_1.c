#include <stdio.h>

int main() {

    int n,n1;
    scanf("%d",&n);
    
    switch(n){
        case 0: printf("No");
            break;
            
        default: n1 = n >> 1;
            
                n = n & n1;
                if(n == n1){
                    printf("Yes");
                }
                else printf("No");
    }
    return 0;
}