#include <stdio.h>

int main() {

    int days,amount;
    scanf("%d %d",&amount,&days);
    double x = amount;
    double y = x - ((x*6)/10);
    double z = x - ((x*3)/10);
    double min = x;
    if(amount>=50.0f && days>=0){
        int count = 0;
        int i = 1;
            while(x>=y && i<=days){
                if(i%2==0 && i%3==0){
                    x = x + ((x*7)/10);
                    i += 6;
                    count += 6;
                    if(min > x) min = x;
                }
                else if(i%2 == 0){
                    x = x - (x/8);
                    if(min > x) min = x;
                }
                else if(i%3 == 0){
                    x = x - (x/5);
                    if(min > x) min = x;
                }
                else{
                    x = x - (x/10);
                    if(min > x) min = x;
                }
                i++;
                count++;
            }

        if(count == days) printf("After %d days: %.2f",count,x);
        else if(count > days){
            count = days;
            printf("After %d days: %.2f",count,x);
        }
        else printf("Stopped early after %d days: %.2f",count,x);

        printf("\nMinimum amount held by Bhaskar: %.2f",min);

        if(x>z) printf("\nLucky Bhaskar");
        else printf("\nBetter Luck Next Time!");
    }
    return 0;
}