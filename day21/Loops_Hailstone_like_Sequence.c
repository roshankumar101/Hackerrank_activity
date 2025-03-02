#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a = n;
    if(n>=1){
        printf("%d",n);
        a = n;
        if(n>1){
            while(n>=0){
                
                if(n==0){
                    printf(" -> 1");
                    n--;
                }
                else if(n==1){
                    n-=2;
                }
                else if(n%3==0){
                    n = n/3;
                    printf(" -> %d",n);
                    if(a<n) a = n;
                }
                else if(n%5==0){
                    n = n-5;
                    printf(" -> %d",n);
                    if(a<n) a = n;
                }
                else{
                    n = n*5;
                    printf(" -> %d",n);
                    if(a<n) a = n;
                }
            }
        }
        
    }
    else{
        printf("%d -> 1",n);
        a = 1;
    }
    printf("\nMax Number: %d",a);
    return 0;
}