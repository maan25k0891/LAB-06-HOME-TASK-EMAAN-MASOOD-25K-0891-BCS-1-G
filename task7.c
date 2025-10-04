#include <stdio.h>

int main() {
    int n;              
    int a = 1, b = 1;    
    int next, i, j;
    int num = 1;         

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= a; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");

        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
