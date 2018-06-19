#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j,k;
    printf("Enter int from 0 to 32\n");
//checking if x in range
do
 {
    scanf("%d", &x);
    if (x < 0 || x > 32)
        printf("Retry:\n");
 }
    while (x < 0 || x > 32);
//main pyramide cycle
for (i = 0; i < x; i++)
 {
    for (j = (x - 1 - i); j > 0; j--)
        printf(" ");
    printf("#");
    for (k = 0; k < i + 1; k++)
        printf("#");
    printf("\n");
 }
}
