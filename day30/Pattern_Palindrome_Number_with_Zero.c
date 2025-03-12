#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int k=i; k<n; k++){
            printf(" ");
        }
        int x=i;
        for(int j=1; j<=2*i-1; j++){
            if(j<=i){
                printf("%d",--x);
            }
            else printf("%d",++x);
        }
        printf("\n");
    }
    return 0;
}