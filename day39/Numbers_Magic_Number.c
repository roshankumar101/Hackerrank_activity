#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int sum = 0;
    int temp = n;
    
    repeat:
    while(n != 0){
        int lastdigit = n % 10;
        n /= 10;
        sum = sum + lastdigit;
    }
    
    if(sum >= 10){
        n = sum;
        sum = 0;
        goto repeat;
    }
    else{
        if(sum == 1) printf("%d is a magic number",temp);
        else printf("%d is not a magic number",temp);
    }
    return 0;
}