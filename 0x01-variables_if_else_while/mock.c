#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("the last number is %d and is less than  %d 5\n", n, l);
			}
	else if (l == 0)
	{
		printf("the last number is %d and is %d 0\n", n, l);
	}
	else
	{
		printf("its ....%d %d 0\n", n, l);
	}
	return (0);
}
