#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>=1){
        for(int i=1; i<=n; i++){
            for(int j=1; j<n-i+1; j++){
                printf(" ");
            }
            for(int k=1; k<=2*i-1; k++){
                if(k<=i) printf("%d",k);
                else printf("%d",2*i-k);
            }
            printf("\n");
        }
    }
    return 0;
}