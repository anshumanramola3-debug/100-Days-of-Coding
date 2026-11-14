#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char color[10];
    enum TrafficLight signal;

    scanf("%s", color);

    if (strcmp(color, "RED") == 0)
        signal = RED;
    else if (strcmp(color, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(color, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid Input");
        return 0;
    }

    switch (signal) {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}