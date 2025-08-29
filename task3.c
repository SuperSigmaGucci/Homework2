#include <stdio.h>

int main(){
    
    int n, k;
    printf("Enter digit:");
    scanf("%d", &n);

    printf("\nMatrix:\n");

    k = 2*n-1;

    for(int i = 0; i<k; i++){
        for(int j=0; j<k; j++){
            if(i<=n-1){
                if(j<=n-1){
                    if(n-j>=n-i){
                        printf("%d",n-j);
                    }
                    else{
                        printf("%d",n-i);
                    }
                    
                    }
                    else{
                        if((n-2-j)*-1>=n-i){
                            printf("%d",(n-2-j)*-1);
                        }
                        else{
                            printf("%d",n-i);
                        }    
                    }
            }
            else{
                if(j<=n-1){
                    if(n-j>=n-((2*(n-1))-i)){ 
                        printf("%d",n-j);
                    }
                    else{
                        printf("%d",n-((2*(n-1))-i));
                    }
                    
                    }
                    else{
                        if((n-2-j)*-1>=n-((2*(n-1))-i)){
                            printf("%d",(n-2-j)*-1);
                        }
                        else{
                            printf("%d",n-((2*(n-1))-i));
                        }    
                 }

            }
            
            
        }
        printf("\n");
    }
    return 0;
}