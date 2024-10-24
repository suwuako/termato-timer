#include <stdio.h>
#include <unistd.h>

#include "../../include/render/render_lib.h"

void render_loop()
{
    char set[5] = ".xoO#";
    int index = 0;
    while (1)
    {
        render_frame(set[index]);
        if (index >= 4) {
            index = 0;
        } else {
            index++;
        }
    }

}

void render_frame(char in)
{
    for (int y = 0; y < 20; y++)
    {
        for (int x = 0; x < 80; x++)
        {
            printf("%c", in);
        }
        printf("\n");
    }
    printf("\033[20A");
    usleep(75000);
}
