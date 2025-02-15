#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d", &a,&b);
    
    a = a ^ b;
    if(a){
        a = a & (a-1);
        switch(a){
            case 0: printf("Yes");
                break;
            default: printf("No");
        }
    }
    else printf("No");
    return 0;
}