#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,x,i,j,k,l;
    printf("Enter int from 1 to 32\n");
//checking if x in range
do
 {
    ch = scanf("%d", &x);
    fflush(stdin);
    if (x < 1 || x > 32 || ch != 1)
        printf("Retry:\n");
 }
    while (x < 1 || x > 32 || ch != 1);
//main pyramide cycle
for (i = 0; i < x; i++)
 {
    for (j = (x - 1 - i); j > 0; j--) //spaces cycle
        printf(" ");
    for (k = 0; k < i + 2; k++) //#cycle
        printf("#");
    printf(" ");
    printf(" ");
    for (l = 0; l < i + 2; l++) //another # cycle
        printf("#");
    printf("\n");
 }
}
