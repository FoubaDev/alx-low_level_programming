#inlcude "main.h"
#include <stdio.h>
#include <string.h>

/*
 * infinite_add - add numbers
 * @n1,@n2,@r ant @size_r are argument
 * Return : we return a pointe
 */

char* infinite_add(char* n1, char* n2, char* r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    int int j = len2 - 1;
    int j = len2 - 1;
    int carry;
    int sum;
    int k = 0;

    // Perform addition digit by digit
    while (i >= 0 || j >= 0 || carry) {
        sum = carry;
        if (i >= 0) {
            sum += n1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += n2[j] - '0';
            j--;
        }

        if (k < size_r - 1) {
            r[k] = '0' + (sum % 10);
            k++;
        } else {
            return 0; // Result cannot be stored in r, return 0
        }

        carry = sum / 10;
    }

    r[k] = '\0'; // Add the terminating null byte

    // Reverse the result stored in r
    int start = 0;
    int end = k - 1;
    while (start < end) {
        char temp = r[start];
        r[start] = r[end];
        r[end] = temp;
        start++;
        end--;
    }

    return r;
}
