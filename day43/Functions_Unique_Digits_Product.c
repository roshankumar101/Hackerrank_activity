#include <stdio.h>

int find_unique_digit_product(int n) {

    int product = 1;
    int lastdigit = 0;
    
    if(n>0){
        for(int i=1; ;i++){
            if(n == 0) break;
            int temp = n;
            short check = 1;
            lastdigit = n%10;
            n /= 10;
            temp /= 10;
            while(temp != 0){
                if(lastdigit == temp%10){
                    check = 0;
                    break;
                }
                temp /= 10;
            }

            if(check) product *= lastdigit;
            else product *= 1;
        }
        return product;
    }
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}



