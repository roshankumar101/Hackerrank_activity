#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int flagsame = 1;
    if(n==1) n = 2;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flagsame = 0;
            break;
        }
    }
    if(flagsame){
        printf("%d",n);
    }
    else {
        int low = n-1;
        int high = n+1;
        int count1=0, count2=0;
        
        for(int i=2; i<=low/2; i++){
            if(low%i==0){
                count1++;
                low--;
                i=1;
            }
        }
        for(int i=2; i<=high/2; i++){
            if(high%i==0){
                count2++;
                high++;
                i=1;
            }
        }
        
        if(count1 > count2) printf("%d",high);
        else printf("%d",low);
    }
    return 0;
}