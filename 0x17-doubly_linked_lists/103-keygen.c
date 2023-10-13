#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* key_a - function that search through
* @x:- args ingth
* @x1:- args
* @lag:- alerts if artained
* Return: Always 0
*/

int key_a(char *x, int x1, char lag)
{
int rs, j;

rs = lag == 0 ? 0 : 1;

for (j = 0; j < x1; j++)
{
if (lag == 0)
rs = rs + x[j];
else
rs = rs *x[j];
}
return ((rs ^ (lag == 0 ? 0x4f : 0x55)) & 0x3F);
}

/**
* key_next - helper function
* @x:- argments
* @x1:- size of args
* Return:- Always 0
*/
int key_nxt(char *x, int x1)
{
int j;
int rs = x[0];

for (j = 0; j < x1; j++)
if (x[j] > rs)
rs = x[j];

srand(rs ^ 0xE);

return (rand() & 0x3F);
}
