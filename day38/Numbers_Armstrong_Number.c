#include <stdio.h>

int main() {

    long int n;
    scanf("%ld",&n);
    long int temp = n;
    short digitcount = 0;
    long int sum = 0;
    
    while(temp != 0){
        digitcount++;
        temp /= 10;
    }
    temp = n;
    for(int i=1; i<=digitcount; i++){
        short lastdigit = temp % 10;
        temp /= 10;
        long int product = lastdigit;
        for(int j=1; j<=digitcount-1; j++){
            product = product * lastdigit;
        }
        sum = sum + product;
    }
    if(sum == n) printf("YES");
    else printf("NO");
    return 0;
}