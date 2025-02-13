#include <stdio.h>

int main() {

    int n,i;
    scanf("%d %d", &n, &i);
    n = n & (n-1);
    printf("%d",n);
    return 0;
}