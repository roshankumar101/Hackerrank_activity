#include <stdio.h>

int main() {

    int n;
    int a,b,c,d;
    int A,B,C,D;
    scanf("%d %d %d %d %d %d %d %d %d" ,&n, &a, &b, &c, &d, &A, &B, &C, &D);
    
    switch(n){
        case 0: printf("Circle");
            break;
            
        case 3:
            if(a>0 && b>0 && c>0 && d>0 && A>0 && B>0 && (d+A+B == 180)){
                if(a+b<=c || a+c<=b || b+c<=a){
                    printf("Invalid Figure");
                }
                else if((a == b && b == c && a == c) && (d == A && A == B && d == B)){
                    printf("Equilateral Triangle");
                }
                else if((a == b && a != c && d == A && d != B) || (a == c && a != b && d == B && d != A) || (b == c && a != c && A == B && d != A)){
                    printf("Isosceles Triangle");
                }
                else if((a != b && a != c && b != c) && (d != A && A != B && d != B)){
                    printf("Scalene Triangle");
                }
                else{
                    printf("Invalid Figure");
                }
            }
            else{
                printf("Invalid Figure");
            }
            break;
                   
        case 4:
            if(a>0 && b>0 && c>0 && d>0 && A>0 && B>0 && C>0 && D>0 && (A+B+C+D == 360)){
                if((a == b && b == c && c == d) && (A == B && B == C && C == D && D == A)){
                    printf("Square");
                }
                else if((a == c && b == d && a != b) && (A == B && B == C && C == D && D == A)){
                    printf("Rectangle");
                }
                else if((a == b && b == c && c == d) && (A == C && B == D && A != B) && (A+B == 180)){
                    printf("Rhombus");
                }
                else if((a == c && b == d && a != b) && (A == C && B == D && A != B) && (A+B == 180)){
                    printf("Parallelogram");
                }
                else{
                    printf("Invalid Figure");
                }
            }
            else{
                printf("Invalid Figure");
            }
            break;
            
        default: printf("Invalid Figure");
            break;
    }
    return 0;
}