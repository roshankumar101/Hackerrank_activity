#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>=5){
        for(int i=1; i<=n; i++){
            
            for(int j=1; j<=n; j++){
                if(i==1 || i==n) printf("*");
                else{
                    if(j==(n/2)+1) printf("*");
                    else printf(" ");
                }
            }
            
            printf("  ");
            
            for(int j=1; j<=n; j++){
                if(j==1 || i==j || j==n) printf("*");
                else printf(" ");
            }
            
            printf("  ");
            
            for(int j=1; j<=n; j++){
                if(j==1 || i==j || j==n) printf("*");
                else printf(" ");
            }
            
            printf("  ");
            
            for(int j=1; j<=n; j++){
                if( ((i==1 || i==n) && (j!=1 && j!=n)) || ((j==1 || j==n) && (i!=1 && i!=n)) ) printf("*");
                else printf(" ");
            }
            
            printf("  ");
            
            for(int j=1; j<=n; j++){
                if(i==j) printf("*");
                else printf(" ");
            }
            
            for(int j=1; j<=n; j++){
                if(i+j == n) printf("*");
                else printf(" ");
            }
            
            printf("  ");
            
            for(int j=1; j<=n; j++){
                if((i==1 && (j!=1 && j!=n)) || i==(n/2)+1 || ((j==1 || j==n)&&i!=1)) printf("*");
                else printf(" ");
            }
            
            printf("  ");
            
            for(int j=1; j<=n; j++){
                if(i==1) printf("*");
                else{
                    if(j==(n/2)+1) printf("*");
                    else printf(" ");
                }
            }
            
            printf("  ");
            
            for(int j=1; j<=n; j++){
                if(i==1 || i==n) printf("*");
                else{
                    if(j==(n/2)+1) printf("*");
                    else printf(" ");
                }
            }
            
            printf("  ");
            
            for(int j=1; j<=n; j++){
                if( ((i==1 || i==n) && (j!=1 && j!=n)) || ((j==1 || j==n) && (i!=1 && i!=n)) ) printf("*");
                else printf(" ");
            }
            
            printf("  ");
            
            for(int j=1; j<=n; j++){
                if(j==1 || i==j || j==n) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}