#include <stdio.h>

int main() {

    long int n;
    scanf("%ld",&n);
    int i;
    long int product = 1;
    for(i=1; i<=n; i++){
        product *= i;
        if(product >= n){
            break;
        }
    }
    if(product == n) printf("%d",i);
    else printf("NO");
    return 0;
}