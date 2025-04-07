#include <stdio.h>
#include <math.h>

int is_kaprekar(int n) {

    int temp = n;
    short count = 0;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    temp = n*n;
    int ten = pow(10,count);
    int rightdigit = temp % ten;
    temp /= ten;
    if((rightdigit + temp) == n) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}