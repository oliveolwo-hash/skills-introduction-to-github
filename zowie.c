#include <stdio.h>

int main()
{
	int pin ;
	int amount = 50000;
	int withdrawal;
	
	printf("enter withdrawal : Shs ");
     scanf(" %d", &withdrawal);
     
	printf("enter pin ");
	scanf("%d", & pin);
	
	if ( pin == 55667) {
	      amount = amount - withdrawal;
	      printf("you have entered the right pin\n");
	     printf("your amount is : Shs %d\n", amount);
	     printf("successful withdraw.")
	}
	else {
		printf("you have entered a wrong pin.\n");
		printf("unsuccessful withdraw.");
	}
	    
	return 0;
}
