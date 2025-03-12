#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int x = 0;
    for(int i=1; i<=n; i++){
        int a = i+x;
        for(int j=1; j<=i; j++){
            
            printf("%d ",a--);
        }
        x = x + i;
        printf("\n");
    }
    
    return 0;
}