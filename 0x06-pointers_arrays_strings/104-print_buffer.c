#include "main.h"
#include <stdio.h>
#include <ctype.h>

void print_buffer(char* b, int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }

    int i, j;
    for (i = 0; i < size; i += 10) {
        // Print the position of the first byte in hexadecimal
        printf("%08x  ", i);

        // Print the hexadecimal content of the buffer
        for (j = i; j < i + 10; j++) {
            if (j < size) {
                printf("%02x ", (unsigned char)b[j]);
            } else {
                printf("   ");
            }
        }

        printf(" ");

        // Print the content of the buffer
        for (j = i; j < i + 10; j++) {
            if (j < size) {
                if (isprint(b[j])) {
                    printf("%c", b[j]);
                } else {
                    printf(".");
                }
            } else {
                break;
            }
        }

        printf("\n");
    }
}
