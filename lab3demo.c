#include <stdio.h>
int main() {
	int score;
	scanf("%d",&score);
	if (score >= 40)
		printf("Pass \n");
	else //39 38 37 ...
		if (score < 30) {
			printf("False :");
			printf("%d \n", (40-score));
		}
		else //30 31 32 ... 39
			printf("you can test again \n");
	
	printf("See you again \n");
}
