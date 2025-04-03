#include <stdio.h>

int find_most_frequent_digit(int n) {

    short max1 = 0;
    short max2 = 0;
    short count2 = 0;
    for(int i=0; i<=9; i++){
        short count1 = 0;
        int temp = n;
        while(temp != 0){
            short lastdigit = temp%10;
            if(lastdigit == i){
                count1++;
                max1 = i;
            }
            temp /= 10;
        }
        if(count1 >= count2){
            count2 = count1;
            if(max1 > max2) max2 = max1;
        }
    }
    return max2;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", find_most_frequent_digit(n)); 
    return 0;
}