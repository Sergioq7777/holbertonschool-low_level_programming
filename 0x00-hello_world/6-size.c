#include <stdio.h>
int main(void)
{
int i;
char c;
long int l;
long long ll;
float f;
printf("Size of a char is:%lu.byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int is:%lu.byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int is:%lu.byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int is:%lu.byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of a float is:%lu.byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
