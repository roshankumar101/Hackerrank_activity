#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    for(int i=2*n-1; i>=1; i-=2){
        if(i == 1) printf("1.");
        else printf("%d ",i);
    }
    return 0;
}