#include <stdio.h>

int main() {

    int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    int a1,a2;
    int b1,b2;
    int c1,c2;
    
    scanf("%d %d %d %d %d %d %d %d %d %d",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    scanf("%d %d",&a1,&a2);
    scanf("%d %d",&b1,&b2);
    scanf("%d %d",&c1,&c2);
    
    switch(a1){
        case 0: n0 = n0 + a2;
            if(n0 > 9){
                n0 = n0 - 10;
            }
            break;
        case 1: n1 = n1 + a2;
            if(n1 > 9){
                n1 = n1 - 10;
            }
            break;
        case 2: n2 = n2 + a2;
            if(n2 > 9){
                n2 = n2 - 10;
            }
            break;
        case 3: n3 = n3 + a2;
            if(n3 > 9){
                n3 = n3 - 10;
            }
            break;
        case 4: n4 = n4 + a2;
            if(n4 > 9){
                n4 = n4 - 10;
            }
            break;
        case 5: n5 = n5 + a2;
            if(n5 > 9){
                n5 = n5 - 10;
            }
            break;
        case 6: n6 = n6 + a2;
            if(n6 > 9){
                n6 = n6 - 10;
            }
            break;
        case 7: n7 = n7 + a2;
            if(n7 > 9){
                n7 = n7 - 10;
            }
            break;
        case 8: n8 = n8 + a2;
            if(n8 > 9){
                n8 = n8 - 10;
            }
            break;
        case 9: n9 = n9 + a2;
            if(n9 > 9){
                n9 = n9 - 10;
            }
            break;
    }
    
    switch(b1){
        case 0: n0 = n0 + b2;
            if(n0 > 9){
                n0 = n0 - 10;
            }
            break;
        case 1: n1 = n1 + b2;
            if(n1 > 9){
                n1 = n1 - 10;
            }
            break;
        case 2: n2 = n2 + b2;
            if(n2 > 9){
                n2 = n2 - 10;
            }
            break;
        case 3: n3 = n3 + b2;
            if(n3 > 9){
                n3 = n3 - 10;
            }
            break;
        case 4: n4 = n4 + b2;
            if(n4 > 9){
                n4 = n4 - 10;
            }
            break;
        case 5: n5 = n5 + b2;
            if(n5 > 9){
                n5 = n5 - 10;
            }
            break;
        case 6: n6 = n6 + b2;
            if(n6 > 9){
                n6 = n6 - 10;
            }
            break;
        case 7: n7 = n7 + b2;
            if(n7 > 9){
                n7 = n7 - 10;
            }
            break;
        case 8: n8 = n8 + b2;
            if(n8 > 9){
                n8 = n8 - 10;
            }
            break;
        case 9: n9 = n9 + b2;
            if(n9 > 9){
                n9 = n9 - 10;
            }
            break;
    }
    
    
    switch(c1){
        case 0: n0 = n0 + c2;
            if(n0 > 9){
                n0 = n0 - 10;
            }
            break;
        case 1: n1 = n1 + c2;
            if(n1 > 9){
                n1 = n1 - 10;
            }
            break;
        case 2: n2 = n2 + c2;
            if(n2 > 9){
                n2 = n2 - 10;
            }
            break;
        case 3: n3 = n3 + c2;
            if(n3 > 9){
                n3 = n3 - 10;
            }
            break;
        case 4: n4 = n4 + c2;
            if(n4 > 9){
                n4 = n4 - 10;
            }
            break;
        case 5: n5 = n5 + c2;
            if(n5 > 9){
                n5 = n5 - 10;
            }
            break;
        case 6: n6 = n6 + c2;
            if(n6 > 9){
                n6 = n6 - 10;
            }
            break;
        case 7: n7 = n7 + c2;
            if(n7 > 9){
                n7 = n7 - 10;
            }
            break;
        case 8: n8 = n8 + c2;
            if(n8 > 9){
                n8 = n8 - 10;
            }
            break;
        case 9: n9 = n9 + c2;
            if(n9 > 9){
                n9 = n9 - 10;
            }
            break;
    }
    
    printf("%d %d %d %d %d %d %d %d %d %d",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
    return 0;
}