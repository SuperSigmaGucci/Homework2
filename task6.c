#include <stdio.h>

#define n 7
#define plus(num) (num+1)

int main(){

    int num;
    printf("Enter digit:");
    scanf("%d", &num);
    
    for(int i = 0; i <= n; i++){
        printf("%d ", num);
        num = plus(num);

    }

    return 0;
}