#include <stdio.h>
#include <string.h>

int main() {
    char data[100], stuffed[200];
    int i, j = 0, count = 0;

    printf("Enter data: ");
    scanf("%s", data);

    for (i = 0; data[i] != '\0'; i++) {
        stuffed[j++] = data[i];

        if (data[i] == '1')
            count++;
        else
            count = 0;

        if (count == 5) {
            stuffed[j++] = '0';
            count = 0;
        }
    }

    stuffed[j] = '\0';

    printf("After bit stuffing: %s\n", stuffed);

    return 0;
}
