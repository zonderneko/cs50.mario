#include <stdio.h>
#include <stdlib.h>
#define COUNT 32
int main()
{
    int ch,x,i,j,k;
    printf("Enter int from 0 to %d\n", COUNT);
//checking if x in range
do
 {
    ch = scanf("%d", &x);
    fflush(stdin);
    if (x < 0 || x > COUNT || ch != 1)
        printf("Retry:\n");
 }
    while (x < 0 || x > 32 || ch != 1);
//main pyramide cycle
for (i = 0; i < x; i++)
 {
    for (j = (x - 1 - i); j > 0; j--) //spaces cycle
        printf(" ");
    printf("#");
    for (k = 0; k < i + 1; k++)
        printf("#");
    printf("\n");
 }
}
