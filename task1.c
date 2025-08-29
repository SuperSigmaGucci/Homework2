#include <stdio.h>


int main(){

    int min, max, c, n1=0, n2=1, n3=-1;
    printf("Enter 2 different digits:");
    scanf("%d %d", &min, &max);

    if(min>max){
        c = min;
        min = max;
        max = c;
    }
    if(min == max){
        printf("You enter same numbers");
        return 0;
    }
    printf("min: %d \t max: %d \n", min, max);
    
    printf("All Fibonacci numbers in this range:\n %d :\t", min);
    
    while (n3<max)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        if (n3>min && n3<max){
            printf(" %d", n3);
        }
    }
    printf("\t: %d", max);


    return 0;
}