#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,x,i,j,k;
    printf("Enter int from 0 to 32\n");
//checking if x in range
do
 {
    ch = scanf("%d", &x);
    fflush(stdin);
    if (x < 0 || x > 32 || ch != 1)
        printf("Retry:\n");
 }
    while (x < 0 || x > 32 || ch != 1);
//m
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
