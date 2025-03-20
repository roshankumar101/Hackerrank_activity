#include <stdio.h>

int main() {

    long int n;
    scanf("%ld",&n);
    if(n<0) n *= -1;
    int count = 0;
    while(n != 0){
        short lastdigit = n%10;
        n /= 10;
        if(lastdigit > 1){
            short check = 1;
            for(int i=2; i<=lastdigit/2; i++){
                if(lastdigit%i == 0){
                    check = 0;
                    break;
                }
            }
            if(check) count++;
        }
    }
    printf("%d",count);
    return 0;
}