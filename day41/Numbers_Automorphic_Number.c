#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int digitcount = 0;
    int temp = n;
    
    while(temp != 0){
        temp /= 10;
        digitcount++;
    }
    temp = n*n;
    int lastdigitsrev = 0;
    for(int i=1; i<=digitcount; i++){
        lastdigitsrev *= 10;
        lastdigitsrev += temp % 10;
        temp /= 10;
    }
    int lastdigits = 0;
    for(int i=1; i<=digitcount; i++){
        lastdigits *= 10;
        lastdigits += lastdigitsrev % 10;
        lastdigitsrev /= 10;
    }
    if(lastdigits == n) printf("%d is automorphic",n);
    else printf("%d is not automorphic",n);
    return 0;
}
