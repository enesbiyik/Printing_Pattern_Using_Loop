#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    for (int i = 1; i <= (2 * n - 1); i++) {
        for (int j = 1; j <= (2 * n - 1); j++) {
            if (abs(n - j) + 1 > abs(n - i)) {
                printf("%d ", abs(n - j) + 1);
            }
            else {
                printf("%d ", abs(n - i) + 1);
            }
        }
        printf("\n");
    }

    return 0;
}

