#include <stdio.h>
int main (){
	int number, i, j;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	for (i = 1; i <= number; i++) {
		printf("\n Multiplication table of %d: \n", i);
		
		for (j = 1; j <= 10; j++){
			printf("\n %d * %d = %d\n", i, j, i * j);
		}
	}
	
	return 0;
}
