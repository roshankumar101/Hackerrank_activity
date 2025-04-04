#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        
        if(y==x+1 || (x%9==0 && y%9==1)) printf("Yes\n");
        else printf("No\n");
        
    }
    return 0;
}
