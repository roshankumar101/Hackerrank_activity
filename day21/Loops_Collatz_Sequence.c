#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>0){
        if(n==1) printf("1");
        else{
            printf("%d -> ",n);
            while(n!=2){
                if(n%2==0){
                    n = n/2;
                    printf("%d -> ",n);
                }
                else{
                    n = 3*n+1;
                    printf("%d -> ",n);
                }
            }
            if(n==2) printf("1");
        }
    }
    return 0;
}