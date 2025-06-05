/* c program to design a digital clock */
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int hour = 0, minute = 0, second = 0;

    while (1) {
        // Clear output screen
        system("cls");  // 'System' should be lowercase 'system'

        // Print time in HH : MM : SS format
        printf("%02d : %02d : %02d\n", hour, minute, second);

        fflush(stdout); // Clear output buffer

        // Increase second
        second++;

        // Update hour, minute, second
        if (second == 60) {
            minute++;      // You had 'minute+1;' — needs to be 'minute++;'
            second = 0;
        }
        if (minute == 60) {
            hour++;
            minute = 0;
        }
        if (hour == 24) {
            hour = 0;
            minute = 0;
            second = 0;
        }

       sleep(1);  // Wait for 1 second
    }

    return 0;
}
