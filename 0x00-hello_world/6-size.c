#include <stdio.h>
int main(void)
{
printf("Size of a char is:%d byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int is:%d byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int is:%d byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int is:%d byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float is:%d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
