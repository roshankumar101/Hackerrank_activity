#include <stdio.h>
#include <string.h>

int main() {

    int month;
    scanf("%d" ,&month);
    
    int year;
    scanf("%d" ,&year);
    
    if(year >= 1){
        if((year%4 == 0 && year%100 != 0) || (year%400 == 0)){
            switch(month){
                case 1: printf("31");
                        break;
                case 2: printf("29");
                        break;
                case 3: printf("31");
                        break;
                case 4: printf("30");
                        break;
                case 5: printf("31");
                        break;
                case 6: printf("30");
                        break;
                case 7: printf("31");
                        break;
                case 8: printf("31");
                        break;
                case 9: printf("30");
                        break;
                case 10: printf("31");
                        break;
                case 11: printf("30");
                        break;
                case 12: printf("31");
                        break;
                default: printf("Invalid Month");
                        break;
            }
        }
        else{
            switch(month){
                case 1: printf("31");
                        break;
                case 2: printf("28");
                        break;
                case 3: printf("31");
                        break;
                case 4: printf("30");
                        break;
                case 5: printf("31");
                        break;
                case 6: printf("30");
                        break;
                case 7: printf("31");
                        break;
                case 8: printf("31");
                        break;
                case 9: printf("30");
                        break;
                case 10: printf("31");
                        break;
                case 11: printf("30");
                        break;
                case 12: printf("31");
                        break;
                default: printf("Invalid Month");
                        break;
            }
        }
    }
    else{
        if(month <= 0 || month >= 13){
            printf("Invalid Month\n");
        }
        printf("Invalid Year");
    }
    return 0;
}