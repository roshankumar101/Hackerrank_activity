#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int val = 1;
    
    for(int i=1; i<=n; i++){

        for(int j=1; j<=2*(n-i); j++){
            printf(" ");
        }
        
        int mid = val;
        int midd = 0;
        if(i==1) {
            printf("1");
            val+=2;
        }
        else {
            for(int k=1; k<=2*(i-1); k++){
                midd = midd + mid;
                mid+=2;
            }
            
            for(int l=1; l<=2*i-1; l++){
                
                if(l==i){
                    printf("%d ",midd);
                    val-=2;
                }
                else printf("%d ",val);
                val+=2;
            }
        }
        printf("\n");
    }

    return 0;
}