#include <stdio.h>
#include <math.h>

int main() {

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a != 0){
        int disc = (b*b) - 4*a*c;

        if(disc > 0){
            double r1 = ((-b) + sqrt(disc)) / (2.0*a);
            double r2 = ((-b) - sqrt(disc)) / (2.0*a);
            printf("Roots: %.2f, %.2f\n",r1,r2);
            printf("Type: Real and Distinct");
        }
        else if(disc == 0){
            double r3 = (-b) / (2.0*a);
            printf("Roots: %.2f, %.2f\n",r3,r3);
            printf("Type: Real and Equal");
        }
        else if(disc < 0){
            double r4r = (-b) / (2.0*a);
            double r4i = (sqrt(-disc)) / (2.0*a);
            printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",r4r,r4i,r4r,r4i);
            printf("Type: Complex");
        }
    }
    return 0;
}