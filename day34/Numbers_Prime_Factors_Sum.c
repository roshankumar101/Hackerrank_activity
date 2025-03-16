#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=1){
        
        for(int i=2; i<=n; i++){
            if(n%i==0){
                count = count + i;
                n = n/i;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}