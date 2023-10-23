#include <stdio.h>

int main() {
  // Set final answer
  char answer[5] = "1324";

  // Set guess value holder
  char guess[5];

  // Keep guessing until user input '0'
  while (guess[0] != '0') {
    scanf("%s", guess);

    int correctPositionAndValue = 0;
    int correctValue = 0;

    for (int i = 0; i < 4; i++) {
      if (answer[i] == guess[i]) {
        correctPositionAndValue++;
        guess[i] = 'x'; // Avoid double count
      }
    }

    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        if (answer[i] == guess[j]) {
          correctValue++;
          continue;
        }
      }
    }

    printf("%dA%dB\n", correctPositionAndValue, correctValue);
  }

  return 0;
}
