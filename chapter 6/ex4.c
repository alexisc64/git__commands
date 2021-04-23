//Given an amount of money (less than $1.00), compute the number of quarters, dimes, nickels, and pennies needed.

#include <stdio.h>

char line[100];
float money;
float money_not_converted;
int quarters = 0;
int dimes = 0;
int nickels = 0;
int pennies = 0;

int main()
{
	printf("Enter the amount of money (less than $1.00): \n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &money);

	money_not_converted = money;

	while (money_not_converted > 0.00) {
		if (money_not_converted > 0.24) {
			quarters = quarters + 1;
			money_not_converted = money_not_converted - 0.25 ;
		}
		else if (money_not_converted > 0.09) {
			dimes = dimes + 1;
			money_not_converted = money_not_converted - 0.10;
		}
		else if (money_not_converted > 0.04) {
			nickels = nickels + 1;
			money_not_converted = money_not_converted - 0.05;
		}
		else if (money_not_converted > 0.00){
			pennies = pennies + 1;
			money_not_converted = money_not_converted - 0.01;
		}
	}

	printf("For $%f you need: \n", money);
	printf("%d quarters\n", quarters);
	printf("%d dimes\n", dimes);
	printf("%d nickels\n", nickels);
	printf("%d pennies\n", pennies);

	return 0;
}
