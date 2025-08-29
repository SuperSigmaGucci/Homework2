#include <stdio.h>

int primarytest(int n, int k){
    if(k<=10){
        if(n % k != 0){
            primarytest( n, k+1);
        }
        if(n % k == 0){
            printf("\nThis digit is not primary");
        }
    }
    if(k>10){
        printf("\nThis digit is primary");
    }

}

int main(){
    
    int n, k = 2;
    printf("Enter digit:");
    scanf("%d", &n);

    if(n==2 || n==3 || n==5 || n==7){
        printf("\nThis digit is primary");
        return 0;
    }

    primarytest(n, k);

    return 0;
}