#include <stdio.h>

int main() {

    int n,i;
    scanf("%d %d",&n ,&i);
    
    i = 1 << i;
    n = n | i;
    printf("%d",n);
    return 0;
}