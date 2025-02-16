#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    int diff = a - b;
    diff >>= 31;
    
    int max = (a & (~diff)) | (b & diff);
    printf("%d",max);
    return 0;
}