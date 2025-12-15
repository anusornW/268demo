#include <stdio.h>
int main() {
	int score;
	scanf("%d",&score);
	if (score >= 40)
		//printf("Pass \n");
	else //39 38 37 ...
		if (score < 30) {
			//printf("False :");
			//printf("%d \n", (40-score));
		}
		else //30 31 32 ... 39
			//printf("you can test again \n");
	
	int printFlag = ;
	switch (printFlag) {
		case 1: printf("This is case 1\n");
		case 2: printf("This is case 2\n");
	
		default: printf("This is default\n");
	} 
	
	printf("See you again \n");
}
