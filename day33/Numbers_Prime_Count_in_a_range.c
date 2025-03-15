#include <stdio.h>

int main() {

    int left,right,count=0;
    scanf("%d %d",&left,&right);
    
    int templ=left,tempr=right;
    
    for(int j=templ; j<=tempr; j++){
        int flag=1;
        if(templ == 1) flag = 0;
        for(int i=2; i<=templ/2; i++){
            if(templ%i==0){
                flag = 0;
                break;
            }
        }
        if(flag) count++;
        templ++;
    }
    
    printf("%d\n",count);
    
    if(count){
        templ = left;
        for(int j=templ; j<=tempr; j++){
            int flag = 1;
            if(templ == 1) flag = 0;
            for(int i=2; i<=templ/2; i++){
                if(templ%i==0){
                    flag = 0;
                    break;
                }
            }
            if(flag) printf("%d ",templ);
            templ++;
            
        }
    }
    return 0;
}