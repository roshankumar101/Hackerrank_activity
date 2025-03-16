#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int count = 0;
    
    for (int i=2; i<=n; i++){
        int num = i;
        int primecheck = 0;
        
        for (int j=2; j*j<=num; j++){
            while(num % j == 0){
                primecheck++;
                num /= j;
            }
        }
        if(num > 1) primecheck++;
          
        if(primecheck == 2) count++;
    }
    
    printf("%d",count);
    return 0;
}