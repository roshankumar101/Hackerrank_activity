#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int i=n&1;
    if(n!=-1){
        int j = 1;
        while(i!=0){
            n >>= 1;
            i = n & 1;
            j++;
        }
        printf("%d",j);
    }
    else printf("-1");
    return 0;
}