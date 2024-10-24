#include <stdio.h>

int main()
{
    char map[3] = "abc";
    int index = 0;
    while (1)
    {
            for (int j = 0; j < 60; j++)
            {
                printf("%c", map[index]);
            }
        printf("\r");

        if (index >= 2) {
            index = 0;
        } else {
            index++;
        }
    }
}
