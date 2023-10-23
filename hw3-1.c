#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	int isPrime =1;
	int number;
	for (number=2; number< N && isPrime; ++number){
		if (N % number ==0){
			isPrime =0;
		
		}
	}
	
	if (isPrime){
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;
}
