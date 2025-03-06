#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>1){
        if(n%2==0){
            n++;
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(j==i || j==n-i+1) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
    }
    else printf("Shape Not Possible");
    return 0;
}