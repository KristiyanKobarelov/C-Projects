#include <stdio.h>

void switchLights(unsigned char *state, int roomNumber) {
  *state ^= (1 << (roomNumber - 1));
}

void printState(unsigned char state) {
  printf("The light is on in rooms:");
  for (int i = 0; i < 8; ++i) {
    if (state & (1 << i)) {
      printf(" %d", (i + 1));
    }
  }
  printf("\n");
}

int main() {
  unsigned char lightState = 0;

  while (1) {
    int choice;
    printf("Menu: \n1. Switch lights\n2. Print state\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
      int roomNumber;
      printf("Enter the room number (1 to 8): ");
      scanf("%d", &roomNumber);
      switchLights(&lightState, roomNumber);
    } else if (choice == 2) {
      printState(lightState);
    } else {
      printf("Invalid choice! Please try again.\n");
    }
  }

  return 0;
}