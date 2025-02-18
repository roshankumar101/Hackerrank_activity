#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    
    a = a ^ b;
    a = ~ a;
    if(a) printf("NO");
    else printf("YES");
    return 0;
}