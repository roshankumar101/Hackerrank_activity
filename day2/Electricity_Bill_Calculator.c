#include <stdio.h>

int main() {

    int n;
    float net;
    scanf("%d" ,&n);
    
    if(n >= 0){
        if(n <= 100){
            net = n*5;
        }
        else if(n <= 300){
            net = ((n-100) * 7) + 500.00;
        }
        else{
            net = ((n-300) * 10) + 1900.00;
        }
        
        
        
        if(net <= 1200.00){
            net = (net*90)/100;
            printf("The electricity bill is: %.2f.", net);
        }
        else{
            printf("The electricity bill is: %.2f.", net);
        }
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}