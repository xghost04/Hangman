# Mini-Project-Hangman-Game
/*test
//we are working on the app
#include <stdio.h>
#include <time.h>

void chronometer() {
    time_t start_time, end_time;
    double elapsed_time;

    start_time = time(NULL);
    end_time = start_time + 10;  // Set end time to 10 seconds after start time

    while (time(NULL) < end_time) {
        elapsed_time = difftime(time(NULL), start_time);
        printf(« Chronometer: %.2lf seconds\n », elapsed_time);
        usleep(100000);  // Sleep for 100 milliseconds to reduce CPU usage
    }

    printf(« Chronometer: 10.00 seconds\n »);
    printf(« Time’s up!\n »);
}

int main() {
    chronometer();
    return 0;
}
