#include <stdio.h>

int main() {

    int a;
    scanf("%d" ,&a);
    
    int b;
    scanf("%d" ,&b);
    
    int c;
    scanf("%d" ,&c);
    
    if(a==b && b==c){
        printf("Lengths: [%d, %d, %d]\n" ,a,b,c);
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.");
    }
    else if((a+b)>c && (b+c)>a && (c+a)>b){
        if(a==b || b==c || c==a){
            printf("Lengths: [%d, %d, %d]\n" ,a,b,c);
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.");
        }
        else{
            printf("Lengths: [%d, %d, %d]\n" ,a,b,c);
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.");
        }
    }
    else{
        printf("Lengths: [%d, %d, %d]\n" ,a,b,c);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }
    return 0;
}