#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    n = n + (n<<1) + (n<<2);
    printf("%d",n);
    return 0;
}