#include <stdio.h>

int main() {
	int x;

	printf("Put an integer: ");
	scanf("%d", &x);

	if(x >=0 && x <= 20) {printf("%d is in the range", x);}
	else {printf("%d is not in the range", x);}
}
