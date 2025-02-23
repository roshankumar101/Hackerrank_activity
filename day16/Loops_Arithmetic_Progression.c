#include <stdio.h>

int main() {

    int n,a,b;
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    
    for(int i=0; i<n; ++i){
        printf("%d ",a + i*b);
    }
    return 0;
}