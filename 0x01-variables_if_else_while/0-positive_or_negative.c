#include <stdlib.h>
#include <time.h>
/**
 * If else statement
 * This statement check whether n is positive, negative or equal to 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0) {
	printf("is positive\n"
	}
	else if (n<0) {
	prinf("is negative\n")
	}
	else {
	printf("is zero")
	} 
	return (0);
}
