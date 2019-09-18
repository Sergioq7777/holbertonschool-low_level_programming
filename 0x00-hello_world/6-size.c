#include <stdio.h>
int main (void)
{
int i;
char c;
long int l;
long long ll;
float f;
printf( "Size of an char is: %lu.\n", (unsigned long)sizeof(c));
printf( "Size of an int is: %lu.\n", (unsigned long)sizeof(i));
printf( "Size of an long int is: %lu.\n", (unsigned long)sizeof(l));
printf( "Size of an long long int is: %lu.\n", (unsigned long)sizeof(ll));
printf( "Size of an float is: %lu.\n", (unsigned long)sizeof(f));
return(0);
}
