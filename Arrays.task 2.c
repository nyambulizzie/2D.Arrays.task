
#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    for (floor = 0; floor < 5; floor++) {
        printf("\nEnter occupancy for floor %d (1=occupied, 0=vacant):\n",
               floor + 1);

        for (room = 0; room < 10; room++) {
            do {
                printf("Room %d: ", room + 1);
                scanf("%d", &occupancy[floor][room]);
            } while (occupancy[floor][room] != 0 &&
                     occupancy[floor][room] != 1);
        }
    }

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               floor + 1, occupied, vacant);
    }

    return 0;
}
