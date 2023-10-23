#include <stdio.h>

int main() {
 
  char answer[5];
  scanf("%s", answer);
  char guess[5];

  while (guess[0] != '0') {
    scanf("%s", guess);

    int correctPositionAndValue = 0;
    int correctValue = 0;
    int i; 
    for ( i = 0; i < 4; i++) {
      if (answer[i] == guess[i]) {
        correctPositionAndValue++;
        guess[i] = 'x'; 
      }
    }

    for ( i = 0; i < 4; i++) {
    	int j;
      for (j = 0; j < 4; j++) {
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
