#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>=1){
        for(int i=1; i<=n; i++){
            int x=i;
            for(int j=1; j<=i; j++){
                if(j%2==0 && j>=2){
                    x = x + ((2*n)-(2*i)+1);
                    printf("%d ",x);
                }
                else if(j%2!=0 && j>=3){
                    x = x + (2*(i-j+1));
                    printf("%d ",x);
                }
                else printf("%d ",x);
            }
            printf("\n");
        }
    }
    return 0;
}