#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int temp = n;
    short sum = 0;
    while(temp != 0){
        short lastdigit = temp % 10;
        sum += lastdigit;
        temp /= 10;
    }
    
    if(n % sum == 0) printf("%d is a harshad number",n);
    else printf("%d is not a harshad number",n);
    return 0;
}
