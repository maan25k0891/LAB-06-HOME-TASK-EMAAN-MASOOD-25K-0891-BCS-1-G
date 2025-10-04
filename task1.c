#include <stdio.h>
int main () {
	int number, original, remainder;
	int reversed = 0;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	original = number;
	
	while (number != 0) {
		remainder = number % 10;
		reversed = reversed * 10 + remainder;
		number = number/10;
	}
	
	if (original == reversed) 
		printf("The number you entered is a palindrome! \n");
		
		else 
		printf("The number you entered is not a palindrome! \n");
		
		return 0;
	}
	

