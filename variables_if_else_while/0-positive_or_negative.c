#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Min : 1 Max : 40 %d\n", random_number(1,40));
        printf("Min : 100 Max : 1000 %d\n",random_number(100,1000));
	return (0);
}
