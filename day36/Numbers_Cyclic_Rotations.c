#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int temp = n;
    int countdigit = 0;
    
    while(temp != 0){
        temp /= 10;
        countdigit++;
    }
    temp = n;
    for(int i=1; i<=countdigit; i++){
        int lastdigit = temp % 10;
        temp /= 10;
        for(int j=1; j<=countdigit-1; j++){
            lastdigit *= 10;
        }
        temp = lastdigit + temp;
        printf("%d\n",temp);
    }
    
    return 0;
}