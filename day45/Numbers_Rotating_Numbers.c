#include <stdio.h>
#include <math.h>

int rotate(int);
int palindrome(int,short);
int primecheck(int);
int right(int,short,short);
int left(int,short,short);

int main() {

    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        int n;
        scanf("%d",&n);
        int result = rotate(n);
        printf("%d\n",result);
    }
    return 0;
}
    
int rotate(int n){
        int temp = n;
        short count = 0;
        while(temp != 0){
            count++;
            temp /= 10;
        }
        
        if(count >= 3){
            short pal = palindrome(n,count);
            short prime = primecheck(n);
            
            if(pal & prime) return n;
            
            else if(pal){
                int numpal = right(n,2,count);
                return numpal;
            }
            else if(prime){
                int numprime = left(n,2,count);
                return numprime;
            }
            else if(n%2 == 0){
                int even = right(n,1,count);
                return even;
            }
            else if(n%2 != 0){
                int odd = left(n,1,count);
                return odd;
            }
            
        }
        else if(count > 0 && count < 3){
            if(n%2 == 0){
                int even = right(n,1,count);
                return even;
            }
            else{
                int odd = left(n,1,count);
                return odd;
            }
        }
        else return 0;
    return 0;
}

    
int palindrome(int n,short count){
        int reverse = 0;
        int temp = n;
        for(int i=1; i<=count; i++){
            reverse *= 10;
            reverse += temp%10;
            temp /= 10;
        }
        if(reverse == n) return 1;
        else return 0;
}

    
int primecheck(int n){
        short checkprime = 1;
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){
                checkprime = 0;
                break;
            }
        }
        if(checkprime) return 1;
        else return 0;
}

int right(int n,short a,short count){
    int rightrotate = 0;
    for(int i=1; i<=a; i++){
        rightrotate = n%10;
        n /= 10;
        int ten = pow(10,(count-1));
        rightrotate *= ten;
        rightrotate += n;
        n = rightrotate;
    }
    
    return rightrotate;
}


int left(int n,short a,short count){
    int leftrotate = 0;
    for(int i=1; i<=a; i++){
        int ten = pow(10,(count-1));
        leftrotate = n%ten;
        n /= ten;
        leftrotate *= 10;
        leftrotate += n;
        n = leftrotate;
    }
    return n;
}

