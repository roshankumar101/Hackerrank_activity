#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    if(n>0 && n<=35){
        printf("<1");
        if(n>1){
            int val=1;
            for(int i=1; i<n; ++i){
                val = val*2;
                printf(" %d",val);
            }
        }
        printf(">");
    }
        
    return 0;
}