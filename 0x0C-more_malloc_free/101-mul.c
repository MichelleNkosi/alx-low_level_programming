#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void _error(void) { printf("Error\n"); exit(98); }
int _isnumber(char *s) { int i = 0; while (s[i]) { if (s[i] < '0' || s[i] > '9') return (0); i++; } return (1); }

void _mul(char *num1, char *num2)
{
    int len1 = strlen(num1), len2 = strlen(num2), i, j;
    int *result = calloc(len1 + len2, sizeof(int));
    if (!result) _error();

    for (i = len1 - 1; i >= 0; i--)
        for (j = len2 - 1; j >= 0; j--)
            result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');

    for (i = len1 + len2 - 1; i > 0; i--)
        if (result[i] >= 10) { result[i - 1] += result[i] / 10; result[i] %= 10; }

    i = 0;
    while (i < len1 + len2 - 1 && result[i] == 0) i++;
    for (; i < len1 + len2; i++) printf("%d", result[i]);
    printf("\n");
    free(result);
}

int main(int argc, char *argv[])
{
    if (argc != 3 || !_isnumber(argv[1]) || !_isnumber(argv[2])) _error();
    _mul(argv[1], argv[2]);
    return (0);
}
