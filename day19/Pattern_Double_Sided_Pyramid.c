#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n > 1){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                printf(" ");
            }
            for(int k=1; k<=i; k++){
                printf("*");
            }
            printf("  ");
            for(int l=1; l<=i; l++){
                printf("*");
            }
            printf("\n");
        }
    }
    else printf("Shape Not Possible");
    return 0;
}