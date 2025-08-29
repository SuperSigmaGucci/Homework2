#include <stdio.h>


int main(){

    int min, max, c;
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
    
    while (min<=max)
    {
        printf("%d ", min);
        min +=1;
    }

    return 0;
}