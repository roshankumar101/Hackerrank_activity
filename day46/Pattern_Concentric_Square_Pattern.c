#include <stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            if(j>=i && j<=2*n-i){
                printf("%d ",n+1-i);
            }
            else{
                if(j<=n) printf("%d ",n+1-j);
                else printf("%d ",j+1-n);
            }
        }
        printf("\n");
    }
    
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=2*n-1; j++){
            if(j>=i && j<=2*n-i){
                printf("%d ",n+1-i);
            }
            else{
                if(j<=n) printf("%d ",n+1-j);
                else printf("%d ",j+1-n);
            }
        }
        printf("\n");
    }
}
