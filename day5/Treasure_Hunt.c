#include <stdio.h>

int main() {

    int path;
    scanf("%d",&path);
    
    int choice = 0;
    
    switch(path){
            
        case 1: printf("Player chooses the Left path.\n");
            int left;
            scanf("%d",&left);
            switch(left){
                case 1: printf("Poor choice, Game Over!");
                    break;
                case 2: printf("Player found a bridge.\n");
                    int left_2;
                    scanf("%d",&left_2);
                    switch(left_2){
                        case 1: printf("Player crosses the bridge safely.\n"); 
                            choice = 1;
                            break;
                        case 2: printf("Poor luck, Game Over!");
                            break;
                    }
                    break;
            }
            break;
            
            
        case 2: printf("Player chooses the Middle path.\n");
            int res1;
            scanf("%d",&res1);
            if(res1 == 582){
                printf("Player solved the puzzle.\n");
                choice = 1;
            }
            else{
                printf("Foolish player, Game Over!");
            }
            break;
            
            
        case 3: printf("Player chooses the Right path.\n");
            int res2;
            scanf("%d",&res2);
            if(res2 == 30){
                printf("Player solved the puzzle.\n");
                choice = 1;
            }
            else{
                printf("Foolish player, Game Over!");
            }
            break;
    }
    if(choice == 1){
        int final;
        scanf("%d",&final);
        switch(final){
            case 1: printf("All that glitters is not gold, Game Over!");
                break;
            case 2: printf("All your efforts were for nothing, Game Over!");
                break;
            case 3: printf("Congratulations!! You won the treasure.");
                break;
        }
    }
    return 0;
}