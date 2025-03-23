#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int sum = 0;
    short check = 1;
    if(n==0 || n==1){
        printf("NO");
        return 0;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            check = 0;
            break;
        }
    }
    if(check){
        while(n!=0){
            int lastdigit = n % 10;
            sum += lastdigit;
            n /= 10;
        }
        for(int j=2; j<=sum/2; j++){
            if(sum%j == 0){
                check = 0;
                break;
            }
        }
    }
    if(check) printf("YES");
    else printf("NO");
    return 0;
}