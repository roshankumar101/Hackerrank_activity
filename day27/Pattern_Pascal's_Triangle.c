#include <stdio.h>

int main() {

    int n,val;
    scanf("%d",&n);
    if(n>=1){
        for(int i=0; i<n; i++){
            for(int j=1; j<n-i; j++){
                printf(" ");
            }
            val = 1;
            for(int k=0; k<=i; k++){
                printf("%d ",val);
                val = (val * (i-k))/(k+1);
            }
            printf("\n");
        }
    }
    return 0;
}