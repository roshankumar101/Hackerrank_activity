#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    printf("Binary equivalent of %d: ",n);
    int start = 0;
    if(n!=0){
        
            for(int i=1; i<=32; i++){
                
                int check = -2147483648;
                check = check & n;
                int num = 0;
                if(check){
                    start = 1;
                    num = 1;
                }
                if(start){
                    printf("%d",num);
                    n = n << 1;
                }
                else n = n << 1;
            }
    }
    else printf("0");
    return 0;
}