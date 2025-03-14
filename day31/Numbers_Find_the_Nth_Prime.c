#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int count = 0;
    int prime = 2;
    int num = 2;
    
    while(count!=n){
        int i = 2;
        int check = 1;
        while(i!=num){
            if(num%i != 0){
                prime = num;
                i++;
            }
            else{
                check = 0;
                break;
            } 
        }
        num++;
        if(check) count++;
    }
    printf("%d",prime);
    return 0;
}