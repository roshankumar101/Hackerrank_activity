#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>2){
        if(n%2!=0) n++;
        
        for(int i=1; i<=n/2; i++){
            for(int j=1; j<(n/2)-i+1; j++){
                printf(" ");
            }
            for(int k=1; k<=2*i-1; k++){
                if(k==1 || k==2*i-1 || k==i) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
        
        for(int i=(n/2)+1; i<=n; i++){
            for(int j=1; j<n/2; j++){
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }
    else printf("Shape Not Possible");
    return 0;
}