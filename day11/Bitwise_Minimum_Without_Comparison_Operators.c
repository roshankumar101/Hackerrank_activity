#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    int x = a - b;
    x >>= 31;
    switch(x){
        case 0: printf("%d",b);
            break;
        default: printf("%d",a);
    }
    return 0;
}