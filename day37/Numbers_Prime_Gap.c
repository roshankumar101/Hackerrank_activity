#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int insideprime = 0;
    int outsideprime = 0;
    
    for(int i=n-1; i>=2; i--){
        short check = 1;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                check = 0;
                break;
            }
        }
        if(check){
            insideprime = i;
            break;
        }
    }
    
    for(int k=n+1; ; k++){
        short check = 1;
        for(int l=2; l<=k/2; l++){
            if(k%l==0){
                check = 0;
                break;
            }
        }
        if(check){
            outsideprime = k;
            break;
        }
    }
    
    int res = outsideprime - insideprime;
    printf("%d",res);
    return 0;
}