#include <stdio.h>
#include <math.h>
int is_disarium_number(int n) {

    short count = 0;
    int temp = n;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    temp = n;
    int sum = 0;
    while(n != 0){
        short power = n%10;
        power = pow(power,count);
        sum += power;
        n /= 10;
        count--;
    }
    if(sum == temp) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_disarium_number(n));
    return 0;
}