#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x;
    scanf("%d" ,&x);
    
    if(x < 0){
        x = x + 360;
    }
    
    int a = x % 360;
    
    if(x == 0){
        printf("Acute Angle");
    }
    else if(a%90 == 0){
        int b = a / 90;
        switch(b){
            case 0: printf("Full Rotation");
                    break;
            case 1: printf("Right Angle");
                    break;
            case 2: printf("Straight Angle");
                    break;
            case 3: printf("Reflex Angle");
                    break;
        }
    }
    else{
        if(a >= 0 && a < 90){
            printf("Acute Angle");
        }
        else if(a > 90 && a < 180){
            printf("Obtuse Angle");
        }
        else{
            printf("Reflex Angle");
        }
    }
    return 0;
}
