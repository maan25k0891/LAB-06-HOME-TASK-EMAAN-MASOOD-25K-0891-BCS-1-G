#include <stdio.h>
int main (){
    int i, number;
    int even = 0;
    int odd = 0;
    
    printf("Enter 10 integers:\n");
    
    for(i = 1; i <= 10; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        
        if(number % 2 == 0)
            even++;
        else
            odd++;
    }
    
    printf("\nTotal even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);
    
    return 0;
}

