#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    n >>= 31;
    if(n) printf("Negative");
    else printf("Positive");
    return 0;
}