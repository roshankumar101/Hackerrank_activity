#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>1){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if(i==n) printf("*");
                else if(j==1 || j==i) printf("*");
                else printf(" ");
            }
            for(int k=1; k<=2*(n-i); k++){
                printf(" ");
            }
            for(int j=1; j<=i; j++){
                if(i==n) printf("*");
                else if(j==1 || j==i) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
    }
    else printf("Shape Not Possible");
    return 0;
}