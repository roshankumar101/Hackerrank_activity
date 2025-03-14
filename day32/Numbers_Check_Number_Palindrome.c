#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int rev = 0;
    int temp = n;
    while(n!=0){
        rev = rev * 10;
        rev = rev + (n%10);
        n = n/10;
    }
    if(rev == temp) printf("YES");
    else printf("NO");
    return 0;
}