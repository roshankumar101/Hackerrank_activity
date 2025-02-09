#include <stdio.h>

int main() {

    int bud;
    scanf("%d" ,&bud);
    int guest;
    scanf("%d" ,&guest);
    int fcpg;
    scanf("%d" ,&fcpg);
    int dc;
    scanf("%d" ,&dc);
    int musicc;
    scanf("%d" ,&musicc);
    int ee;
    scanf("%d" ,&ee);
    
    if(bud > 0){
        if(guest > 5 && guest <= 50){
            if((dc < (30*bud)/100) || ((guest*fcpg) < (50*bud)/100) ){
                if(guest > 25){
                    if(musicc > 0){
                        int a = (guest*fcpg) + dc + musicc + ee;

                        if(a <= bud){
                            printf("Celebration Approved");
                        }
                        else{
                            printf("Celebration Denied");
                        }
                    }
                    else{
                        printf("Celebration Denied");
                    }
                }
                else{
                    int a = (guest*fcpg) + dc + musicc + ee;

                    if(a <= bud){
                        printf("Celebration Approved");
                    }
                    else{
                        printf("Celebration Denied");
                    }
                }
            }
            else{
                printf("Celebration Denied");
            }
        }
        else{
            printf("Celebration Denied");
        }
    }
    
    return 0;
}