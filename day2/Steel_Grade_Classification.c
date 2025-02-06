#include <stdio.h>

int main() {

    int h;
    scanf("%d" ,&h);
    
    float c;
    scanf("%f" ,&c);
    
    int t;
    scanf("%d" ,&t);
    
    if(h > 50){
        if(c < 0.7){
            if(t > 5600){
                printf("The grade of the steel is: 10\n");
                printf("All of the conditions met.");
            }
            else{
                printf("The grade of the steel is: 9\n");
                printf("Two conditions met.");
            }
        }
        else{
            if(t > 5600){
                printf("The grade of the steel is: 7\n");
                printf("Two conditions met.");
            }
            else{
                printf("The grade of the steel is: 6\n");
                printf("Only one condition met.");
            }
        }
    }
    else{
        if(c < 0.7){
            if(t > 5600){
                printf("The grade of the steel is: 8\n");
                printf("Two conditions met.");
            }
            else{
                printf("The grade of the steel is: 6\n");
                printf("Only one condition met.");
            }
        }
        else{
            if(t > 5600){
                printf("The grade of the steel is: 6\n");
                printf("Only one condition met.");
            }
            else{
                printf("The grade of the steel is: 5\n");
                printf("None of the conditions met.");
            }
        }
    }
    
    return 0;
}