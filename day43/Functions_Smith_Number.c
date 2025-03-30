#include <stdio.h>

int is_smith_number(int n) {

    int temp = n;
    int digitsum = 0;
    int factorsum = 0;

    while(temp != 0){
        digitsum += temp % 10;
        temp /= 10;
    }
    temp = n;
    while(n > 1){
        short check = 1;
        if(temp == n) check = 2;
        
        for(int i=2; i<=n/check; i++){
            if(n%i == 0){
                n /= i;
                while(i != 0){
                    factorsum += i % 10;
                    i /= 10;  
                }
                check = 0;
                break;
            }
        }
        if(check == 2) break;
    }
    if(digitsum == factorsum) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}