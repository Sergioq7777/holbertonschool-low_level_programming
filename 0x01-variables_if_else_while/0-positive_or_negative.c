#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("Is positive \n");
}
else if (n == 0)
{
printf("Is zero \n");
}
else
{
printf("Is negative \n");
}
return (0);
}
