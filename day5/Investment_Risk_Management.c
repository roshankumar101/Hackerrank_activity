#include <stdio.h>

int main() {

    int age , inc , risk;
    scanf("%d" ,&age);
    scanf("%d" ,&inc);
    scanf("%d" ,&risk);
    
    if(age > 0 && age < 100){
        
        if(age > 0 && age < 30){
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
        else if(age <= 50){
            if(inc > 0 && inc <= 30000){
                if(risk == 1 || risk == 2){
                    printf("Low Risk Portfolio: Suitable for conservative investments.");
                }
            }
            else if(inc <= 75000){
                if(risk == 2){
                    printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
                }
            }
            else{
                if(risk == 1 || risk == 2){
                    printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
                }
                else{
                    printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
                }
            }
        }
        else{
            if(inc > 75000 && risk == 3){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
            else{
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
        }
    }
    return 0;
}