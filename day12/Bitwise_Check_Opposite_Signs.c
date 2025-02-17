#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d", &a,&b);
    
    int n = a ^ b;
    n >>= 31;
    if(n) printf("Yes");
    else printf("No");
    return 0;
}