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
/*
sol2:	
	if (score >= 30)
		//pass
		//you can test again
	else
		//false
		
sol3:
	if (score < 30)
		//false
	else
		//pass
		//you can test again

sol4:
	if (score < 30)
		//false	
	if (score>29 && score < 40)
		//you can test again
	if (score>39)
		//pass
*/
	
	printf("See you again \n");
}
