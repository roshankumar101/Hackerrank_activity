#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>0){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if(i%2==0){
                    if(j%2==0) printf("1");
                    else printf("0");
                }
                else{
                    if(j%2==0) printf("0");
                    else printf("1");
                }
            }
            printf("\n");
        }
    }
    else printf("Shape Not Possible");
    return 0;
}
