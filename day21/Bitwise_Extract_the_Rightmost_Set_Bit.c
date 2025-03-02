#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int i=n&1;
    if(n!=0){
        int j = 1;
        while(i!=1){
            n >>= 1;
            i = n & 1;
            j++;
        }
        printf("%d",j);
    }
    else printf("0");
    return 0;
}