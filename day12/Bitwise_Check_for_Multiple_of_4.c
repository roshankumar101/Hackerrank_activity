#include <stdio.h>

int main() {

    int a;
    scanf("%d",&a);
    a = a & 3;
    if(a) printf("No");
    else printf("Yes");
    return 0;
}