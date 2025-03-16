#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int iteration = 0;
    int count = 0;
    int num = 2;
    int prime = 2;
    while(iteration != n){
        int i = 2;
        int check = 1;
        while(i != num){
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
        if(check){
            count = count + prime;
            iteration++;
        }
    }
    printf("%d",count);
    
    return 0;
}