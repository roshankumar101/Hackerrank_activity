#include <stdio.h>

int main() {

    int n,fact = 0;
    scanf("%d",&n);
    
    for(int i=n; i>=1; i--){
        if(n%i == 0 && i==n){
            printf("%d",i);
        }
        else if(n%i==0){
            if(fact == 1){
                printf(" %d",i);

                fact=0;
            }
            else fact = 1;
        }
    }
    printf(".");
    
    return 0;
}