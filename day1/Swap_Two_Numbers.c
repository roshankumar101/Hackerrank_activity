#include <stdio.h>

int main() {

    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    printf("a = %d\n",a);
    printf("b = %d",b);
    
    return 0;
}