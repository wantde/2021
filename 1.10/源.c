#include <stdio.h>  

void subfun(int n, char subargs[][5])
{
    int i;
    for (i = 0; i < n; i++) {
        printf("subargs[%d] = %s\n", i, subargs[i]);
    }
}

void main()
{
    char args[][5] = { "abc", "def", "ghi" };
    subfun(3, args);
}