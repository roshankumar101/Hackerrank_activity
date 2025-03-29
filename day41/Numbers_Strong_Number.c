#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int temp = n;
    int sum = 0;
    while(temp != 0){
        
        int lastdigit = temp % 10;
        temp /= 10;
        int fact = 1;
        for(int i=lastdigit; i>=2; i--){
            fact *= i;
        }
        sum += fact;
    }
    if(sum == n) printf("YES");
    else printf("NO");
    return 0;
}