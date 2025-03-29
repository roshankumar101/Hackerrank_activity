#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int p=2,q;
    if(n%2 == 0 && n>2){
        
        while(p <= n/2){
            short check = 1;
            for(int i=2; i*i<=p; i++){
                if(p%i == 0){
                    check = 0;
                    break;
                }
            }
            
            if(check){
                
                q = n - p;
                for(int j=2; j*j<=q; j++){
                    if(q%j == 0){
                        check = 0;
                        break;
                    }
                }
                if(check){
                    printf("%d %d",p,q);
                    break;
                }
            }
            p++;
        }
    }
    else printf("No Solution");
    return 0;
}