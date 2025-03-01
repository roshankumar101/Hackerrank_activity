#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>1){
        for(int i=1; i<=n; i++){
            if(i==1){
                for(int j=1; j<=2*n-1; j++){
                    if(j%2==0) printf(" ");
                    else printf("*");
                }
            }
            else{
                for(int k=1; k<=2*n-i+1; k++){
                    if(k==i || k==2*n-i) printf("*");
                    else printf(" ");
                }
            }
            printf("\n");
        }
        for(int i=2; i<=n; i++){
            if(i==n){
                for(int j=1; j<=2*n-1; j++){
                    if(j%2==0) printf(" ");
                    else printf("*");
                }
            }
            else{
                for(int k=1; k<=n+i; k++){
                    if(k==n-i+1 || k==n+i-1) printf("*");
                    else printf(" ");
                }
            }
            printf("\n");
        }
    }
    else printf("Shape Not Possible");
    return 0;
}