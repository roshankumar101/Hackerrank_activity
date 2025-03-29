#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int p = 1;
    int q = 1;
    short count = 0;
    
    
    for(int i=2; i<=n; i++){
        short check = 1;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                check = 0;
                break;
            }
        }
        
        if(check){
            q = p;
            p = i;
            if(p == q+2) count++;
        }
        
    }
    printf("%d",count);
    return 0;
}