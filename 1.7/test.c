#include<stdio.h>
#include <stdio.h>
int main()
{
    int ch = 0;
    char s[] = "AaEeIiOoUu";
    while (~scanf_s(" %c", &ch))
    {
        int i = 0;
        for (i = 0; i < 10; i++)
        {

            if (ch == s[i])
            {

                printf("Vowel\n");
                break;
            }
        }



        if (i == 10)
            printf("Consonant\n");

    }


    return 0;
}