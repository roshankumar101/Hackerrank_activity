#include <stdio.h>

int is_spy_number(int n) {

    int sum = 0;
    int product = 1;
    if(n > 0){
        while(n != 0){
            short lastdigit = n % 10;
            sum += lastdigit;
            product *= lastdigit;
            n /= 10;
        }
        if(sum == product) return 1;
        else return 0;
    }
    else return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_spy_number(n));
    return 0;
}