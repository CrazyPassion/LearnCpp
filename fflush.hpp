#pragma once
#include <stdio.h>
#include <unistd.h>

void fflushPrint();

void fflushPrint() {
    for (int i = 0; i < 100; i++)
    {
        printf("percent : %d%%.\r", i);
        sleep(1);
        fflush(stdout);
    }
}